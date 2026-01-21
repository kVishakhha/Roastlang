/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ROASTLANG_TAB_H_INCLUDED
# define YY_YY_ROASTLANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 14 "src/roastlang.y"

    #include "ast.h"
    extern struct ASTNode *ast_root;

#line 54 "roastlang.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_NUM = 258,                   /* T_NUM  */
    T_ID = 259,                    /* T_ID  */
    T_STRING = 260,                /* T_STRING  */
    T_ROAST = 261,                 /* T_ROAST  */
    T_ASSIGN = 262,                /* T_ASSIGN  */
    T_BURN = 263,                  /* T_BURN  */
    T_READ = 264,                  /* T_READ  */
    T_TILDE = 265,                 /* T_TILDE  */
    T_EXIT = 266,                  /* T_EXIT  */
    T_CHECK = 267,                 /* T_CHECK  */
    T_IF = 268,                    /* T_IF  */
    T_THEN = 269,                  /* T_THEN  */
    T_OUCH = 270,                  /* T_OUCH  */
    T_ELSE = 271,                  /* T_ELSE  */
    T_MICDROP = 272,               /* T_MICDROP  */
    T_KEEP = 273,                  /* T_KEEP  */
    T_WHILE = 274,                 /* T_WHILE  */
    T_NEVERMIND = 275,             /* T_NEVERMIND  */
    T_FOR = 276,                   /* T_FOR  */
    T_FROM = 277,                  /* T_FROM  */
    T_TO = 278,                    /* T_TO  */
    T_TOAST = 279,                 /* T_TOAST  */
    T_BREAK = 280,                 /* T_BREAK  */
    T_CONTINUE = 281,              /* T_CONTINUE  */
    T_ARRAY = 282,                 /* T_ARRAY  */
    T_EQ = 283,                    /* T_EQ  */
    T_NEQ = 284,                   /* T_NEQ  */
    T_GT = 285,                    /* T_GT  */
    T_LT = 286,                    /* T_LT  */
    T_GTE = 287,                   /* T_GTE  */
    T_LTE = 288,                   /* T_LTE  */
    T_MOD = 289,                   /* T_MOD  */
    T_POW = 290                    /* T_POW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "src/roastlang.y"

    int ival;
    char *sval;
    struct ASTNode *node;
    struct Value val;

#line 113 "roastlang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ROASTLANG_TAB_H_INCLUDED  */
