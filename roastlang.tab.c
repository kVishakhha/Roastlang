/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "src/roastlang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

// FIX: Change definition to extern declaration here
extern struct ASTNode *ast_root;

#line 83 "roastlang.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "roastlang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_NUM = 3,                      /* T_NUM  */
  YYSYMBOL_T_ID = 4,                       /* T_ID  */
  YYSYMBOL_T_STRING = 5,                   /* T_STRING  */
  YYSYMBOL_T_ROAST = 6,                    /* T_ROAST  */
  YYSYMBOL_T_ASSIGN = 7,                   /* T_ASSIGN  */
  YYSYMBOL_T_BURN = 8,                     /* T_BURN  */
  YYSYMBOL_T_READ = 9,                     /* T_READ  */
  YYSYMBOL_T_TILDE = 10,                   /* T_TILDE  */
  YYSYMBOL_T_EXIT = 11,                    /* T_EXIT  */
  YYSYMBOL_T_CHECK = 12,                   /* T_CHECK  */
  YYSYMBOL_T_IF = 13,                      /* T_IF  */
  YYSYMBOL_T_THEN = 14,                    /* T_THEN  */
  YYSYMBOL_T_OUCH = 15,                    /* T_OUCH  */
  YYSYMBOL_T_ELSE = 16,                    /* T_ELSE  */
  YYSYMBOL_T_MICDROP = 17,                 /* T_MICDROP  */
  YYSYMBOL_T_KEEP = 18,                    /* T_KEEP  */
  YYSYMBOL_T_WHILE = 19,                   /* T_WHILE  */
  YYSYMBOL_T_NEVERMIND = 20,               /* T_NEVERMIND  */
  YYSYMBOL_T_FOR = 21,                     /* T_FOR  */
  YYSYMBOL_T_FROM = 22,                    /* T_FROM  */
  YYSYMBOL_T_TO = 23,                      /* T_TO  */
  YYSYMBOL_T_TOAST = 24,                   /* T_TOAST  */
  YYSYMBOL_T_BREAK = 25,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 26,                /* T_CONTINUE  */
  YYSYMBOL_T_ARRAY = 27,                   /* T_ARRAY  */
  YYSYMBOL_T_EQ = 28,                      /* T_EQ  */
  YYSYMBOL_T_NEQ = 29,                     /* T_NEQ  */
  YYSYMBOL_T_GT = 30,                      /* T_GT  */
  YYSYMBOL_T_LT = 31,                      /* T_LT  */
  YYSYMBOL_T_GTE = 32,                     /* T_GTE  */
  YYSYMBOL_T_LTE = 33,                     /* T_LTE  */
  YYSYMBOL_T_MOD = 34,                     /* T_MOD  */
  YYSYMBOL_T_POW = 35,                     /* T_POW  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '*'  */
  YYSYMBOL_39_ = 39,                       /* '/'  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_stmt_list = 46,                 /* stmt_list  */
  YYSYMBOL_stmt = 47,                      /* stmt  */
  YYSYMBOL_if_stmt = 48,                   /* if_stmt  */
  YYSYMBOL_loop_stmt = 49,                 /* loop_stmt  */
  YYSYMBOL_for_stmt = 50,                  /* for_stmt  */
  YYSYMBOL_cond = 51,                      /* cond  */
  YYSYMBOL_value = 52,                     /* value  */
  YYSYMBOL_expr = 53                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  37
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    38,    36,     2,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    47,    48,    52,    56,    67,    71,    75,
      78,    79,    80,    83,    87,    91,    97,   101,   107,   113,
     118,   119,   120,   121,   122,   123,   126,   127,   131,   132,
     135,   138,   139,   140,   141,   142,   143,   144
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_NUM", "T_ID",
  "T_STRING", "T_ROAST", "T_ASSIGN", "T_BURN", "T_READ", "T_TILDE",
  "T_EXIT", "T_CHECK", "T_IF", "T_THEN", "T_OUCH", "T_ELSE", "T_MICDROP",
  "T_KEEP", "T_WHILE", "T_NEVERMIND", "T_FOR", "T_FROM", "T_TO", "T_TOAST",
  "T_BREAK", "T_CONTINUE", "T_ARRAY", "T_EQ", "T_NEQ", "T_GT", "T_LT",
  "T_GTE", "T_LTE", "T_MOD", "T_POW", "'+'", "'-'", "'*'", "'/'", "'['",
  "']'", "'('", "')'", "$accept", "program", "stmt_list", "stmt",
  "if_stmt", "loop_stmt", "for_stmt", "cond", "value", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,     1,   150,   -27,     7,    -1,    10,     5,     4,     0,
      14,    12,    13,   -27,   -27,   -27,   -27,     3,   -27,   -20,
     -27,    -1,   -27,    11,    15,   -27,   -18,    -4,    17,   -27,
     -27,     2,    -1,    -1,   167,   -27,    -1,    -1,    -1,    -1,
      -1,    -1,   -27,    -1,    -1,    -1,    27,    20,   177,   185,
     -27,    18,    18,   -26,   -26,    18,    18,    -6,   161,     9,
     143,    39,   -27,    53,   -27,    57,    -1,    -1,    -1,    -1,
      -1,    -1,   -27,    -1,    31,    -1,   -27,   193,   193,   193,
     193,   193,   193,    87,   149,    64,    41,    76,   -27,   -27,
     -27,   -27,   -27,   -27,   108,   129,   -27,   -27
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,    10,    11,    12,     0,    26,    29,
      27,     0,    28,     0,     0,    15,     0,     0,     0,    13,
      14,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
      37,    35,    36,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     5,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     3,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,    18,     3,
       6,     7,    16,     3,     0,     0,    19,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,    -3,   -27,   -27,   -27,   -27,    37,   -27,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    13,    14,    15,    16,    57,    22,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,     3,    18,    19,    20,    18,    19,    20,    36,    37,
      31,    17,    40,    41,    24,    25,    34,    26,    28,    27,
      33,    35,    29,    30,    43,    42,    47,    48,    49,    46,
      62,    51,    52,    53,    54,    55,    56,    65,    44,    45,
      60,    21,    74,    32,    21,    36,    37,    38,    39,    40,
      41,    91,    72,    37,    36,    37,    38,    39,    40,    41,
      75,    77,    78,    79,    80,    81,    82,    61,    84,    83,
      86,    76,    85,    87,    90,    36,    37,    38,    39,    40,
      41,    59,     4,     0,     5,     6,    94,     7,     8,     0,
      95,    92,    93,     4,     9,     5,     6,    10,     7,     8,
       0,    11,    12,     0,     0,     9,     0,    88,    10,     0,
       0,     0,    11,    12,     4,     0,     5,     6,     0,     7,
       8,     0,     0,     0,     0,     0,     9,     0,    96,    10,
       0,     0,     0,    11,    12,     4,     0,     5,     6,     0,
       7,     8,     0,     0,     0,     0,    97,     9,     0,     0,
      10,     0,     0,     0,    11,    12,     4,     0,     5,     6,
       0,     7,     8,     0,     0,     0,    73,     0,     9,     0,
       0,    10,     0,    89,     0,    11,    12,    36,    37,    38,
      39,    40,    41,    36,    37,    38,    39,    40,    41,    66,
      67,    68,    69,    70,    71,    36,    37,    38,    39,    40,
      41,    36,    37,    38,    39,    40,    41,     0,     0,     0,
      50,    36,    37,    38,    39,    40,    41,     0,    63,    36,
      37,    38,    39,    40,    41,     0,    64,    36,    37,    38,
      39,    40,    41
};

static const yytype_int8 yycheck[] =
{
       5,     0,     3,     4,     5,     3,     4,     5,    34,    35,
       7,     4,    38,    39,     4,    10,    21,    13,     4,    19,
      40,    10,    10,    10,    42,    10,    31,    32,    33,    27,
      10,    36,    37,    38,    39,    40,    41,    43,    42,    22,
      45,    42,     3,    40,    42,    34,    35,    36,    37,    38,
      39,    10,    43,    35,    34,    35,    36,    37,    38,    39,
       7,    66,    67,    68,    69,    70,    71,    40,    73,    72,
      75,    14,    41,    76,    10,    34,    35,    36,    37,    38,
      39,    44,     6,    -1,     8,     9,    89,    11,    12,    -1,
      93,    15,    16,     6,    18,     8,     9,    21,    11,    12,
      -1,    25,    26,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    -1,    25,    26,     6,    -1,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    25,    26,     6,    -1,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    25,    26,     6,    -1,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    23,    -1,    18,    -1,
      -1,    21,    -1,    24,    -1,    25,    26,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    34,    35,    36,    37,    38,    39,    -1,    41,    34,
      35,    36,    37,    38,    39,    -1,    41,    34,    35,    36,
      37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,    46,     0,     6,     8,     9,    11,    12,    18,
      21,    25,    26,    47,    48,    49,    50,     4,     3,     4,
       5,    42,    52,    53,     4,    10,    13,    19,     4,    10,
      10,     7,    40,    40,    53,    10,    34,    35,    36,    37,
      38,    39,    10,    42,    42,    22,    27,    53,    53,    53,
      43,    53,    53,    53,    53,    53,    53,    51,    53,    51,
      53,    40,    10,    41,    41,    43,    28,    29,    30,    31,
      32,    33,    43,    23,     3,     7,    14,    53,    53,    53,
      53,    53,    53,    46,    53,    41,    53,    46,    20,    24,
      10,    10,    15,    16,    46,    46,    20,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    48,    48,    49,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     5,     8,     8,     3,     3,
       1,     1,     1,     2,     2,     2,     8,    10,     7,     9,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       4,     3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmt_list  */
#line 45 "src/roastlang.y"
                   { ast_root = (yyvsp[0].node); YYACCEPT; }
#line 1201 "roastlang.tab.c"
    break;

  case 3: /* stmt_list: %empty  */
#line 47 "src/roastlang.y"
           { (yyval.node) = NULL; }
#line 1207 "roastlang.tab.c"
    break;

  case 4: /* stmt_list: stmt_list stmt  */
#line 48 "src/roastlang.y"
                          { (yyval.node) = create_node_list((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1213 "roastlang.tab.c"
    break;

  case 5: /* stmt: T_ROAST T_ID T_ASSIGN expr T_TILDE  */
#line 53 "src/roastlang.y"
        { (yyval.node) = create_node_assign((yyvsp[-3].sval), (yyvsp[-1].node)); }
#line 1219 "roastlang.tab.c"
    break;

  case 6: /* stmt: T_ROAST T_ID T_ASSIGN T_ARRAY '[' T_NUM ']' T_TILDE  */
#line 57 "src/roastlang.y"
        { 
          struct Value v; 
          v.type = VAL_TYPE_ARRAY; 
          // Use calloc to initialize elements to zero
          v.array.elements = calloc((yyvsp[-2].ival), sizeof(int)); 
          v.array.size = (yyvsp[-2].ival); 
          (yyval.node) = create_node_assign((yyvsp[-6].sval), create_node_val(v)); 
        }
#line 1232 "roastlang.tab.c"
    break;

  case 7: /* stmt: T_ROAST T_ID '[' expr ']' T_ASSIGN expr T_TILDE  */
#line 68 "src/roastlang.y"
        { (yyval.node) = create_node_array_assign((yyvsp[-6].sval), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1238 "roastlang.tab.c"
    break;

  case 8: /* stmt: T_BURN expr T_TILDE  */
#line 72 "src/roastlang.y"
        { (yyval.node) = create_node_burn((yyvsp[-1].node)); }
#line 1244 "roastlang.tab.c"
    break;

  case 9: /* stmt: T_READ T_ID T_TILDE  */
#line 76 "src/roastlang.y"
        { (yyval.node) = create_node_read((yyvsp[-1].sval)); }
#line 1250 "roastlang.tab.c"
    break;

  case 13: /* stmt: T_BREAK T_TILDE  */
#line 84 "src/roastlang.y"
        { (yyval.node) = create_node_break(); }
#line 1256 "roastlang.tab.c"
    break;

  case 14: /* stmt: T_CONTINUE T_TILDE  */
#line 88 "src/roastlang.y"
        { (yyval.node) = create_node_continue(); }
#line 1262 "roastlang.tab.c"
    break;

  case 15: /* stmt: T_EXIT T_TILDE  */
#line 92 "src/roastlang.y"
        { YYACCEPT; }
#line 1268 "roastlang.tab.c"
    break;

  case 16: /* if_stmt: T_CHECK T_IF '(' cond ')' T_THEN stmt_list T_OUCH  */
#line 98 "src/roastlang.y"
        { (yyval.node) = create_node_if((yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1274 "roastlang.tab.c"
    break;

  case 17: /* if_stmt: T_CHECK T_IF '(' cond ')' T_THEN stmt_list T_ELSE stmt_list T_MICDROP  */
#line 102 "src/roastlang.y"
        { (yyval.node) = create_node_if((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1280 "roastlang.tab.c"
    break;

  case 18: /* loop_stmt: T_KEEP T_WHILE '(' cond ')' stmt_list T_NEVERMIND  */
#line 108 "src/roastlang.y"
        { (yyval.node) = create_node_while((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1286 "roastlang.tab.c"
    break;

  case 19: /* for_stmt: T_FOR T_ID T_FROM expr T_TO expr T_TOAST stmt_list T_NEVERMIND  */
#line 114 "src/roastlang.y"
        { (yyval.node) = create_node_for((yyvsp[-7].sval), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1292 "roastlang.tab.c"
    break;

  case 20: /* cond: expr T_EQ expr  */
#line 118 "src/roastlang.y"
                     { (yyval.node) = create_node_op(T_EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1298 "roastlang.tab.c"
    break;

  case 21: /* cond: expr T_NEQ expr  */
#line 119 "src/roastlang.y"
                      { (yyval.node) = create_node_op(T_NEQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1304 "roastlang.tab.c"
    break;

  case 22: /* cond: expr T_GT expr  */
#line 120 "src/roastlang.y"
                      { (yyval.node) = create_node_op(T_GT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1310 "roastlang.tab.c"
    break;

  case 23: /* cond: expr T_LT expr  */
#line 121 "src/roastlang.y"
                      { (yyval.node) = create_node_op(T_LT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1316 "roastlang.tab.c"
    break;

  case 24: /* cond: expr T_GTE expr  */
#line 122 "src/roastlang.y"
                      { (yyval.node) = create_node_op(T_GTE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1322 "roastlang.tab.c"
    break;

  case 25: /* cond: expr T_LTE expr  */
#line 123 "src/roastlang.y"
                      { (yyval.node) = create_node_op(T_LTE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1328 "roastlang.tab.c"
    break;

  case 26: /* value: T_NUM  */
#line 126 "src/roastlang.y"
             { (yyval.val).type = VAL_TYPE_INT; (yyval.val).ival = (yyvsp[0].ival); }
#line 1334 "roastlang.tab.c"
    break;

  case 27: /* value: T_STRING  */
#line 127 "src/roastlang.y"
                { (yyval.val).type = VAL_TYPE_STR; (yyval.val).sval = (yyvsp[0].sval); }
#line 1340 "roastlang.tab.c"
    break;

  case 28: /* expr: value  */
#line 131 "src/roastlang.y"
                       { (yyval.node) = create_node_val((yyvsp[0].val)); }
#line 1346 "roastlang.tab.c"
    break;

  case 29: /* expr: T_ID  */
#line 132 "src/roastlang.y"
                       { (yyval.node) = create_node_id((yyvsp[0].sval)); }
#line 1352 "roastlang.tab.c"
    break;

  case 30: /* expr: T_ID '[' expr ']'  */
#line 135 "src/roastlang.y"
                        { (yyval.node) = create_node_array_access((yyvsp[-3].sval), (yyvsp[-1].node)); }
#line 1358 "roastlang.tab.c"
    break;

  case 31: /* expr: expr '+' expr  */
#line 138 "src/roastlang.y"
                       { (yyval.node) = create_node_op('+', (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1364 "roastlang.tab.c"
    break;

  case 32: /* expr: expr '-' expr  */
#line 139 "src/roastlang.y"
                       { (yyval.node) = create_node_op('-', (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1370 "roastlang.tab.c"
    break;

  case 33: /* expr: expr '*' expr  */
#line 140 "src/roastlang.y"
                       { (yyval.node) = create_node_op('*', (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1376 "roastlang.tab.c"
    break;

  case 34: /* expr: expr '/' expr  */
#line 141 "src/roastlang.y"
                       { (yyval.node) = create_node_op('/', (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1382 "roastlang.tab.c"
    break;

  case 35: /* expr: expr T_MOD expr  */
#line 142 "src/roastlang.y"
                       { (yyval.node) = create_node_op(T_MOD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1388 "roastlang.tab.c"
    break;

  case 36: /* expr: expr T_POW expr  */
#line 143 "src/roastlang.y"
                       { (yyval.node) = create_node_op(T_POW, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1394 "roastlang.tab.c"
    break;

  case 37: /* expr: '(' expr ')'  */
#line 144 "src/roastlang.y"
                       { (yyval.node) = (yyvsp[-1].node); }
#line 1400 "roastlang.tab.c"
    break;


#line 1404 "roastlang.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 147 "src/roastlang.y"

void yyerror(const char *s) { fprintf(stderr, "Syntax Error: %s\n", s); }
