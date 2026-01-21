/* roastlang.y - Enhanced parser with arrays, for loops, input (V2.0) */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

// FIX: Change definition to extern declaration here
extern struct ASTNode *ast_root;
%}

%code requires {
    #include "ast.h"
    extern struct ASTNode *ast_root;
}

%union {
    int ival;
    char *sval;
    struct ASTNode *node;
    struct Value val;
}

%token <ival> T_NUM
%token <sval> T_ID T_STRING
%token T_ROAST T_ASSIGN T_BURN T_READ T_TILDE T_EXIT
%token T_CHECK T_IF T_THEN T_OUCH T_ELSE T_MICDROP
%token T_KEEP T_WHILE T_NEVERMIND
%token T_FOR T_FROM T_TO T_TOAST
%token T_BREAK T_CONTINUE
%token T_ARRAY
%token T_EQ T_NEQ T_GT T_LT T_GTE T_LTE T_MOD T_POW

%type <node> program stmt_list stmt expr cond if_stmt loop_stmt for_stmt
%type <val> value

%left '+' '-'
%left '*' '/' T_MOD
%right T_POW

%%

program: stmt_list { ast_root = $1; YYACCEPT; }; // Builds AST and signals success to main()

stmt_list: { $$ = NULL; } 
         | stmt_list stmt { $$ = create_node_list($1, $2); };

stmt:
    // Variable assignment: roast name is expr ~
    T_ROAST T_ID T_ASSIGN expr T_TILDE 
        { $$ = create_node_assign($2, $4); }

    // Array declaration: roast name is array [ size ] ~
    | T_ROAST T_ID T_ASSIGN T_ARRAY '[' T_NUM ']' T_TILDE 
        { 
          struct Value v; 
          v.type = VAL_TYPE_ARRAY; 
          // Use calloc to initialize elements to zero
          v.array.elements = calloc($6, sizeof(int)); 
          v.array.size = $6; 
          $$ = create_node_assign($2, create_node_val(v)); 
        }

    // Array element assignment: roast name [ index ] is expr ~
    | T_ROAST T_ID '[' expr ']' T_ASSIGN expr T_TILDE 
        { $$ = create_node_array_assign($2, $4, $7); }

    // Print statement: burn expr ~
    | T_BURN expr T_TILDE 
        { $$ = create_node_burn($2); }

    // Input statement: sip name ~
    | T_READ T_ID T_TILDE 
        { $$ = create_node_read($2); }

    | if_stmt
    | loop_stmt
    | for_stmt

    // Control flow: stop roasting ~
    | T_BREAK T_TILDE 
        { $$ = create_node_break(); }

    // Control flow: skip ahead ~
    | T_CONTINUE T_TILDE 
        { $$ = create_node_continue(); }
        
    // Program exit: exit ~
    | T_EXIT T_TILDE 
        { YYACCEPT; }
;

if_stmt:
    // If-Then: check if (cond) then stmt_list ouch
    T_CHECK T_IF '(' cond ')' T_THEN stmt_list T_OUCH 
        { $$ = create_node_if($4, $7, NULL); }

    // If-Else: check if (cond) then stmt_list else stmt_list mic drop
    | T_CHECK T_IF '(' cond ')' T_THEN stmt_list T_ELSE stmt_list T_MICDROP 
        { $$ = create_node_if($4, $7, $9); }
;

loop_stmt: 
    // While loop: keep going while (cond) stmt_list nevermind
    T_KEEP T_WHILE '(' cond ')' stmt_list T_NEVERMIND 
        { $$ = create_node_while($4, $6); }
;

for_stmt:
    // For loop: roast fire i from start to end toast stmt_list nevermind
    T_FOR T_ID T_FROM expr T_TO expr T_TOAST stmt_list T_NEVERMIND
        { $$ = create_node_for($2, $4, $6, $8); }
;

cond:
    expr T_EQ expr   { $$ = create_node_op(T_EQ, $1, $3); }
    | expr T_NEQ expr { $$ = create_node_op(T_NEQ, $1, $3); }
    | expr T_GT expr  { $$ = create_node_op(T_GT, $1, $3); }
    | expr T_LT expr  { $$ = create_node_op(T_LT, $1, $3); }
    | expr T_GTE expr { $$ = create_node_op(T_GTE, $1, $3); }
    | expr T_LTE expr { $$ = create_node_op(T_LTE, $1, $3); }
;

value: T_NUM { $$.type = VAL_TYPE_INT; $$.ival = $1; }
     | T_STRING { $$.type = VAL_TYPE_STR; $$.sval = $1; }
;

expr:
    value              { $$ = create_node_val($1); }
    | T_ID             { $$ = create_node_id($1); }
    
    // Array access: name [ index ]
    | T_ID '[' expr ']' { $$ = create_node_array_access($1, $3); }
    
    // Arithmetic expressions
    | expr '+' expr    { $$ = create_node_op('+', $1, $3); }
    | expr '-' expr    { $$ = create_node_op('-', $1, $3); }
    | expr '*' expr    { $$ = create_node_op('*', $1, $3); }
    | expr '/' expr    { $$ = create_node_op('/', $1, $3); }
    | expr T_MOD expr  { $$ = create_node_op(T_MOD, $1, $3); }
    | expr T_POW expr  { $$ = create_node_op(T_POW, $1, $3); }
    | '(' expr ')'     { $$ = $2; }
;

%%
void yyerror(const char *s) { fprintf(stderr, "Syntax Error: %s\n", s); }
