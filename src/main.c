/* main.c - FINAL STABLE EXECUTION LOGIC */
#include "ast.h"
#include "roastlang.tab.h"
#include <math.h>

extern FILE *yyin;

#define MAX_SYMBOLS 100

volatile int break_flag = 0;
volatile int continue_flag = 0;

struct ASTNode *ast_root = NULL; // CRITICAL: Single definition here

struct Symbol {
    char *name;
    struct Value value;
} symbol_table[MAX_SYMBOLS];
int symbol_count = 0;

void store_variable(char *name, struct Value value) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0) {
            symbol_table[i].value = value;
            return;
        }
    }
    if (symbol_count < MAX_SYMBOLS) {
        symbol_table[symbol_count].name = strdup(name); 
        symbol_table[symbol_count].value = value;
        symbol_count++;
    } else {
        fprintf(stderr, "Error: Symbol table full. Cannot store '%s'.\n", name);
        exit(1);
    }
}

struct Value lookup_variable(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0) {
            return symbol_table[i].value;
        }
    }
    fprintf(stderr, "Error: Undefined variable '%s'\n", name);
    struct Value err = {.type = VAL_TYPE_INT, .ival = 0};
    return err;
}

// --- AST NODE CREATION FUNCTIONS (Removed original comments for brevity) ---

struct ASTNode *create_node_list(struct ASTNode *stmt, struct ASTNode *next) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_LIST;
    node->data.list.left = stmt;
    node->data.list.right = next;
    return node;
}

struct ASTNode *create_node_val(struct Value val) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_VAL;
    node->data.val = val;
    return node;
}

struct ASTNode *create_node_id(char *name) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_ID;
    node->data.name = name;
    return node;
}

struct ASTNode *create_node_op(int op, struct ASTNode *left, struct ASTNode *right) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_OP;
    node->data.op.op = op;
    node->data.op.left = left;
    node->data.op.right = right;
    return node;
}

struct ASTNode *create_node_assign(char *name, struct ASTNode *expr) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_ASSIGN;
    node->data.assign.name = name;
    node->data.assign.expr = expr;
    return node;
}

struct ASTNode *create_node_burn(struct ASTNode *expr) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_BURN;
    node->data.burn.expr = expr;
    return node;
}

struct ASTNode *create_node_read(char *var) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_READ;
    node->data.read.var = var;
    return node;
}

struct ASTNode *create_node_if(struct ASTNode *cond, struct ASTNode *if_branch, struct ASTNode *else_branch) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_IF;
    node->data.branch.cond = cond;
    node->data.branch.if_branch = if_branch;
    node->data.branch.else_branch = else_branch;
    return node;
}

struct ASTNode *create_node_while(struct ASTNode *cond, struct ASTNode *loop_body) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_WHILE;
    node->data.branch.cond = cond;
    node->data.branch.if_branch = loop_body;
    node->data.branch.else_branch = NULL;
    return node;
}

struct ASTNode *create_node_for(char *var, struct ASTNode *start, struct ASTNode *end, struct ASTNode *body) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_FOR;
    node->data.forloop.var = var;
    node->data.forloop.start = start;
    node->data.forloop.end = end;
    node->data.forloop.body = body;
    return node;
}

struct ASTNode *create_node_array_access(char *array_name, struct ASTNode *index) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_ARRAY_ACCESS;
    node->data.array_access.array_name = array_name;
    node->data.array_access.index = index;
    return node;
}

struct ASTNode *create_node_array_assign(char *array_name, struct ASTNode *index, struct ASTNode *value) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_ARRAY_ASSIGN;
    node->data.array_assign.array_name = array_name;
    node->data.array_assign.index = index;
    node->data.array_assign.value = value;
    return node;
}

struct ASTNode *create_node_break(void) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_BREAK;
    return node;
}

struct ASTNode *create_node_continue(void) {
    struct ASTNode *node = malloc(sizeof(struct ASTNode));
    node->type = NODE_TYPE_CONTINUE;
    return node;
}

// --- AST EXECUTION FUNCTION ---

struct Value execute_ast(struct ASTNode *node) {
    struct Value result = {.type = VAL_TYPE_INT, .ival = 0};
    if (!node) return result;

    switch (node->type) {
    case NODE_TYPE_LIST:
        execute_ast(node->data.list.left);
        // FIX: Re-implement critical flow check for LIST, making sure execution stops if a flag is set by the first node.
        if (break_flag || continue_flag) return result; 
        execute_ast(node->data.list.right);
        break;

    case NODE_TYPE_VAL:
        return node->data.val;

    case NODE_TYPE_ID:
        return lookup_variable(node->data.name);

    case NODE_TYPE_ASSIGN:
        store_variable(node->data.assign.name, execute_ast(node->data.assign.expr));
        break;

    case NODE_TYPE_BURN: {
        struct Value val = execute_ast(node->data.burn.expr);
        if (val.type == VAL_TYPE_INT)
            printf("%d", val.ival);
        else if (val.type == VAL_TYPE_STR)
            printf("%s", val.sval);
        else if (val.type == VAL_TYPE_ARRAY) {
            printf("[");
            for (int i = 0; i < val.array.size; i++) {
                printf("%d", val.array.elements[i]);
                if (i < val.array.size - 1) printf(", ");
            }
            printf("]");
        }
        printf("\n");
        fflush(stdout); 
        break;
    }

    case NODE_TYPE_READ: {
        struct Value input_val;
        input_val.type = VAL_TYPE_INT;
        printf(">> ");
        fflush(stdout);
        if (scanf("%d", &input_val.ival) != 1) {
            fprintf(stderr, "Error: Invalid input for READ statement. Defaulting to 0.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            input_val.ival = 0;
        }
        store_variable(node->data.read.var, input_val);
        break;
    }

    case NODE_TYPE_IF:
        if (execute_ast(node->data.branch.cond).ival)
            execute_ast(node->data.branch.if_branch);
        else if (node->data.branch.else_branch)
            execute_ast(node->data.branch.else_branch);
        break;

    case NODE_TYPE_WHILE:
        break_flag = 0;
        continue_flag = 0;
        while (execute_ast(node->data.branch.cond).ival) {
            execute_ast(node->data.branch.if_branch);
            if (break_flag) break;
            if (continue_flag) continue_flag = 0;
        }
        break_flag = 0;
        break;

    case NODE_TYPE_FOR: {
        break_flag = 0;
        continue_flag = 0;
        int start = execute_ast(node->data.forloop.start).ival;
        int end = execute_ast(node->data.forloop.end).ival;
        
        // Explicitly initialize the iteration variable before loop starts
        struct Value loop_var_init;
        loop_var_init.type = VAL_TYPE_INT;
        
        for (int i = start; i <= end; i++) {
            // Set the iteration variable for the current scope/step
            loop_var_init.ival = i;
            store_variable(node->data.forloop.var, loop_var_init); 
            
            execute_ast(node->data.forloop.body);
            
            if (break_flag) break;
            if (continue_flag) continue_flag = 0;
        }
        break_flag = 0;
        break;
    }

    case NODE_TYPE_ARRAY_ACCESS: {
        struct Value arr = lookup_variable(node->data.array_access.array_name);
        int idx = execute_ast(node->data.array_access.index).ival;
        if (arr.type == VAL_TYPE_ARRAY) {
            if (idx >= 0 && idx < arr.array.size) {
                result.type = VAL_TYPE_INT;
                result.ival = arr.array.elements[idx];
            } else {
                fprintf(stderr, "Error: Array index %d out of bounds (size %d).\n", idx, arr.array.size);
            }
        } else {
            fprintf(stderr, "Error: Variable '%s' is not an array.\n", node->data.array_access.array_name);
        }
        break;
    }

    case NODE_TYPE_ARRAY_ASSIGN: {
        struct Value arr = lookup_variable(node->data.array_assign.array_name);
        int idx = execute_ast(node->data.array_assign.index).ival;
        int val = execute_ast(node->data.array_assign.value).ival;
        if (arr.type == VAL_TYPE_ARRAY) {
            if (idx >= 0 && idx < arr.array.size) {
                arr.array.elements[idx] = val;
            } else {
                fprintf(stderr, "Error: Array index %d out of bounds (size %d) during assignment.\n", idx, arr.array.size);
            }
        } else {
            fprintf(stderr, "Error: Variable '%s' is not an array and cannot be assigned by index.\n", node->data.array_assign.array_name);
        }
        break;
    }

    case NODE_TYPE_BREAK:
        break_flag = 1;
        break;

    case NODE_TYPE_CONTINUE:
        continue_flag = 1;
        break;

    case NODE_TYPE_OP: {
        int left = execute_ast(node->data.op.left).ival;
        int right = execute_ast(node->data.op.right).ival;
        result.type = VAL_TYPE_INT;
        switch (node->data.op.op) {
        case '+': result.ival = left + right; break;
        case '-': result.ival = left - right; break;
        case '*': result.ival = left * right; break;
        case '/':
            if (right == 0) {
                fprintf(stderr, "Error: Division by zero\n");
                exit(1);
            }
            result.ival = left / right;
            break;
        case T_MOD: result.ival = left % right; break;
        case T_POW: result.ival = (int)pow(left, right); break;
        case T_EQ: result.ival = (left == right); break;
        case T_NEQ: result.ival = (left != right); break;
        case T_GT: result.ival = (left > right); break;
        case T_LT: result.ival = (left < right); break;
        case T_GTE: result.ival = (left >= right); break;
        case T_LTE: result.ival = (left <= right); break;
        }
        return result;
    }
    }
    return result;
}

int yyparse(void);
int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename.roast>\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Could not open file '%s'\n", argv[1]);
        return 1;
    }
    yyin = file;
    printf("=== RoastLang v2.0 (Enhanced) ===\n");
    fflush(stdout);
    
    yyparse(); 

    if (ast_root) {
        execute_ast(ast_root);
    } else {
        // Only output this if parsing failed and the program didn't exit via YYACCEPT
        fprintf(stderr, "Error: Could not execute program. Check for syntax errors.\n");
    }
    
    fclose(file);
    return 0;
}
