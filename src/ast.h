/* ast.h - Enhanced version with arrays, functions, and more */
#ifndef AST_H_INCLUDED
#define AST_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    VAL_TYPE_INT,
    VAL_TYPE_STR,
    VAL_TYPE_ARRAY
} ValType;

struct Value {
    ValType type;
    union {
        int ival;
        char *sval;
        struct {
            int *elements;
            int size;
        } array;
    };
};

typedef enum {
    NODE_TYPE_LIST,
    NODE_TYPE_VAL,
    NODE_TYPE_ID,
    NODE_TYPE_ASSIGN,
    NODE_TYPE_BURN,
    NODE_TYPE_READ,
    NODE_TYPE_IF,
    NODE_TYPE_WHILE,
    NODE_TYPE_FOR,
    NODE_TYPE_OP,
    NODE_TYPE_ARRAY_ACCESS,
    NODE_TYPE_ARRAY_ASSIGN,
    NODE_TYPE_BREAK,
    NODE_TYPE_CONTINUE
} NodeType;

struct ASTNode {
    NodeType type;
    union {
        struct {
            struct ASTNode *left;
            struct ASTNode *right;
        } list;
        struct Value val;
        char *name;
        struct {
            char *name;
            struct ASTNode *expr;
        } assign;
        struct {
            struct ASTNode *expr;
        } burn;
        struct {
            char *var;
        } read;
        struct {
            int op;
            struct ASTNode *left;
            struct ASTNode *right;
        } op;
        struct {
            struct ASTNode *cond;
            struct ASTNode *if_branch;
            struct ASTNode *else_branch;
        } branch;
        struct {
            char *var;
            struct ASTNode *start;
            struct ASTNode *end;
            struct ASTNode *body;
        } forloop;
        struct {
            char *array_name;
            struct ASTNode *index;
        } array_access;
        struct {
            char *array_name;
            struct ASTNode *index;
            struct ASTNode *value;
        } array_assign;
    } data;
};

struct ASTNode *create_node_list(struct ASTNode *stmt, struct ASTNode *next);
struct ASTNode *create_node_val(struct Value val);
struct ASTNode *create_node_id(char *name);
struct ASTNode *create_node_op(int op, struct ASTNode *left, struct ASTNode *right);
struct ASTNode *create_node_assign(char *name, struct ASTNode *expr);
struct ASTNode *create_node_burn(struct ASTNode *expr);
struct ASTNode *create_node_read(char *var);
struct ASTNode *create_node_if(struct ASTNode *cond, struct ASTNode *if_branch, struct ASTNode *else_branch);
struct ASTNode *create_node_while(struct ASTNode *cond, struct ASTNode *loop_body);
struct ASTNode *create_node_for(char *var, struct ASTNode *start, struct ASTNode *end, struct ASTNode *body);
struct ASTNode *create_node_array_access(char *array_name, struct ASTNode *index);
struct ASTNode *create_node_array_assign(char *array_name, struct ASTNode *index, struct ASTNode *value);
struct ASTNode *create_node_break(void);
struct ASTNode *create_node_continue(void);

struct Value execute_ast(struct ASTNode *node);

#endif