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
#line 1 "./grammerAnalyzer.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

int cnt, idx;
char str[100000][50];
extern int num_char, num_line;
extern char *yytext;
char old[50], now[50];

FILE *ft, *fd;

#line 86 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Ident = 258,                   /* Ident  */
    Constant = 259,                /* Constant  */
    CmpOp = 260,                   /* CmpOp  */
    EqOp = 261,                    /* EqOp  */
    AndOp = 262,                   /* AndOp  */
    OrOp = 263,                    /* OrOp  */
    ASSIGN = 264,                  /* ASSIGN  */
    UnaryOp = 265,                 /* UnaryOp  */
    AddOp = 266,                   /* AddOp  */
    MulOp = 267,                   /* MulOp  */
    LPAREN = 268,                  /* LPAREN  */
    RPAREN = 269,                  /* RPAREN  */
    LBRACE = 270,                  /* LBRACE  */
    RBRACE = 271,                  /* RBRACE  */
    LBRACKET = 272,                /* LBRACKET  */
    RBRACKET = 273,                /* RBRACKET  */
    SEMICOLON = 274,               /* SEMICOLON  */
    COMMA = 275,                   /* COMMA  */
    CONST = 276,                   /* CONST  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    WHILE = 279,                   /* WHILE  */
    BREAK = 280,                   /* BREAK  */
    CONTINUE = 281,                /* CONTINUE  */
    RETURN = 282,                  /* RETURN  */
    INT = 283,                     /* INT  */
    VOID = 284,                    /* VOID  */
    ERROR = 285,                   /* ERROR  */
    LOWER_THAN_ELSE = 286          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define Ident 258
#define Constant 259
#define CmpOp 260
#define EqOp 261
#define AndOp 262
#define OrOp 263
#define ASSIGN 264
#define UnaryOp 265
#define AddOp 266
#define MulOp 267
#define LPAREN 268
#define RPAREN 269
#define LBRACE 270
#define RBRACE 271
#define LBRACKET 272
#define RBRACKET 273
#define SEMICOLON 274
#define COMMA 275
#define CONST 276
#define IF 277
#define ELSE 278
#define WHILE 279
#define BREAK 280
#define CONTINUE 281
#define RETURN 282
#define INT 283
#define VOID 284
#define ERROR 285
#define LOWER_THAN_ELSE 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Ident = 3,                      /* Ident  */
  YYSYMBOL_Constant = 4,                   /* Constant  */
  YYSYMBOL_CmpOp = 5,                      /* CmpOp  */
  YYSYMBOL_EqOp = 6,                       /* EqOp  */
  YYSYMBOL_AndOp = 7,                      /* AndOp  */
  YYSYMBOL_OrOp = 8,                       /* OrOp  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_UnaryOp = 10,                   /* UnaryOp  */
  YYSYMBOL_AddOp = 11,                     /* AddOp  */
  YYSYMBOL_MulOp = 12,                     /* MulOp  */
  YYSYMBOL_LPAREN = 13,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 14,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 15,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 16,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 17,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 18,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 19,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 20,                     /* COMMA  */
  YYSYMBOL_CONST = 21,                     /* CONST  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_BREAK = 25,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_INT = 28,                       /* INT  */
  YYSYMBOL_VOID = 29,                      /* VOID  */
  YYSYMBOL_ERROR = 30,                     /* ERROR  */
  YYSYMBOL_LOWER_THAN_ELSE = 31,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_CompUnit = 33,                  /* CompUnit  */
  YYSYMBOL_Decl = 34,                      /* Decl  */
  YYSYMBOL_ConstDecl = 35,                 /* ConstDecl  */
  YYSYMBOL_ConstDefList = 36,              /* ConstDefList  */
  YYSYMBOL_ConstDef = 37,                  /* ConstDef  */
  YYSYMBOL_ConstArray = 38,                /* ConstArray  */
  YYSYMBOL_array = 39,                     /* array  */
  YYSYMBOL_ConstInitVal = 40,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValList = 41,          /* ConstInitValList  */
  YYSYMBOL_VarDecl = 42,                   /* VarDecl  */
  YYSYMBOL_VarDefList = 43,                /* VarDefList  */
  YYSYMBOL_VarDef = 44,                    /* VarDef  */
  YYSYMBOL_InitVal = 45,                   /* InitVal  */
  YYSYMBOL_InitValList = 46,               /* InitValList  */
  YYSYMBOL_FuncDef = 47,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 48,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 49,                /* FuncFParam  */
  YYSYMBOL_Block = 50,                     /* Block  */
  YYSYMBOL_BlockItemList = 51,             /* BlockItemList  */
  YYSYMBOL_BlockItem = 52,                 /* BlockItem  */
  YYSYMBOL_Stmt = 53,                      /* Stmt  */
  YYSYMBOL_Exp = 54,                       /* Exp  */
  YYSYMBOL_Cond = 55,                      /* Cond  */
  YYSYMBOL_LVal = 56,                      /* LVal  */
  YYSYMBOL_PrimaryExp = 57,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 58,                  /* UnaryExp  */
  YYSYMBOL_FuncRParams = 59,               /* FuncRParams  */
  YYSYMBOL_MulExp = 60,                    /* MulExp  */
  YYSYMBOL_AddExp = 61,                    /* AddExp  */
  YYSYMBOL_RelExp = 62,                    /* RelExp  */
  YYSYMBOL_EqExp = 63,                     /* EqExp  */
  YYSYMBOL_LAndExp = 64,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 65,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 66,                  /* ConstExp  */
  YYSYMBOL_empty = 67                      /* empty  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    32,    37,    42,    47,    55,    60,    68,
      77,    82,    87,    94,   100,   107,   113,   121,   127,   135,
     140,   146,   153,   158,   167,   175,   180,   186,   193,   198,
     204,   211,   216,   222,   229,   234,   243,   249,   258,   264,
     273,   278,   287,   292,   298,   304,   312,   320,   325,   333,
     338,   346,   352,   357,   362,   368,   374,   380,   385,   390,
     395,   403,   411,   419,   424,   431,   436,   441,   449,   454,
     460,   466,   474,   479,   487,   492,   500,   505,   513,   518,
     526,   531,   539,   544,   552,   557,   565,   572
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
  "\"end of file\"", "error", "\"invalid token\"", "Ident", "Constant",
  "CmpOp", "EqOp", "AndOp", "OrOp", "ASSIGN", "UnaryOp", "AddOp", "MulOp",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET",
  "SEMICOLON", "COMMA", "CONST", "IF", "ELSE", "WHILE", "BREAK",
  "CONTINUE", "RETURN", "INT", "VOID", "ERROR", "LOWER_THAN_ELSE",
  "$accept", "CompUnit", "Decl", "ConstDecl", "ConstDefList", "ConstDef",
  "ConstArray", "array", "ConstInitVal", "ConstInitValList", "VarDecl",
  "VarDefList", "VarDef", "InitVal", "InitValList", "FuncDef",
  "FuncFParams", "FuncFParam", "Block", "BlockItemList", "BlockItem",
  "Stmt", "Exp", "Cond", "LVal", "PrimaryExp", "UnaryExp", "FuncRParams",
  "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp",
  "empty", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      89,   -20,   105,    15,    11,  -137,  -137,  -137,  -137,  -137,
     108,  -137,    16,   128,  -137,    38,  -137,  -137,  -137,  -137,
    -137,   131,  -137,    47,     5,  -137,  -137,   126,    47,    73,
    -137,   140,    78,    -5,  -137,  -137,    54,   136,  -137,  -137,
    -137,    -1,   118,  -137,  -137,    79,    41,    47,   142,    86,
    -137,   136,   136,    54,  -137,  -137,  -137,  -137,  -137,    93,
     113,  -137,  -137,   120,    46,   142,   118,  -137,  -137,    52,
    -137,  -137,  -137,  -137,   122,   135,  -137,  -137,   143,  -137,
      68,   136,   136,  -137,  -137,  -137,  -137,   114,   127,  -137,
      76,  -137,  -137,  -137,    58,   136,  -137,  -137,    54,  -137,
      93,  -137,   118,  -137,   138,  -137,   145,   146,   137,   144,
      24,   141,  -137,  -137,  -137,  -137,   147,   151,  -137,   136,
     149,  -137,  -137,   138,   136,   136,  -137,  -137,  -137,   150,
    -137,   136,  -137,  -137,   148,   113,   156,   158,   161,   157,
     159,  -137,   152,    20,   136,   136,   136,   136,    20,  -137,
     153,   113,   156,   158,   161,  -137,    20,  -137
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      87,     0,     0,     0,     0,     2,     7,     8,     3,     6,
       0,    27,    87,     0,    25,     0,     1,     4,     5,    12,
      87,     0,    10,    87,    28,    16,    24,     0,    87,     0,
       9,     0,     0,     0,    40,    45,     0,     0,    30,    87,
      26,     0,     0,    14,    11,    42,     0,    87,    33,    87,
      67,     0,     0,     0,    29,    31,    66,    68,    74,    76,
      61,    64,    86,     0,     0,    21,     0,    13,    19,     0,
      87,    38,    36,    41,     0,    63,    18,    71,     0,    34,
       0,     0,     0,    15,    39,    37,    22,     0,     0,    87,
       0,    47,    70,    72,     0,     0,    65,    32,     0,    75,
      77,    20,     0,    87,    43,    46,     0,     0,     0,     0,
       0,     0,    49,    53,    48,    50,     0,    66,    69,     0,
       0,    35,    23,    44,     0,     0,    57,    58,    59,     0,
      52,     0,    73,    17,     0,    78,    80,    82,    84,    62,
       0,    60,     0,     0,     0,     0,     0,     0,     0,    51,
      54,    79,    81,    83,    85,    56,     0,    55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,    -3,  -137,  -137,   139,   -18,  -137,   -61,  -137,
    -137,  -137,   154,   -49,  -137,   168,   155,   130,     2,  -137,
    -137,  -136,   -36,    49,   -80,  -137,   -45,  -137,    96,   -31,
      30,    33,    35,  -137,   160,     3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    21,    22,    24,    75,    67,    87,
       7,    13,    14,    54,    80,     8,    33,    34,   113,    90,
     114,   115,    62,   134,    56,    57,    58,    94,    59,    60,
     136,   137,   138,   139,    68,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    17,    29,     9,    79,    86,    77,   150,    10,    46,
     117,    16,   155,    64,    36,    47,    78,    55,    15,    47,
     157,    61,    37,    49,    50,    61,    35,    49,    50,    23,
      51,    35,     1,    52,    51,    70,    99,    52,    93,     2,
       3,   122,   106,   128,   107,   108,   109,   110,    72,   121,
      35,    28,    76,    88,   116,    48,    70,    49,    50,   120,
      71,    70,    55,   117,    51,    84,    85,    52,   117,    53,
      89,   104,   118,    91,   129,    32,   117,    61,   119,    49,
      50,    45,    42,   132,    97,   123,    51,   112,    98,    52,
      37,    70,   105,   135,   135,   142,    69,     1,   106,    74,
     107,   108,   109,   110,   111,    81,    11,   116,    12,    19,
       1,    20,   116,   151,   135,   135,   135,     2,     3,    65,
     116,    49,    50,    61,    82,    49,    50,    38,    51,    39,
     101,    52,    51,    66,   102,    52,    92,    61,    83,    49,
      50,    43,    11,    20,    39,   103,    51,    26,    27,    52,
      30,    31,    95,   -64,   -64,    37,   126,    96,   124,   125,
     131,   144,   143,   127,   145,   147,   130,   133,   146,   141,
      44,   149,    18,   148,   140,   152,   156,    73,   100,   153,
       0,    40,   154,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
      36,     4,    20,     0,    53,    66,    51,   143,    28,    14,
      90,     0,   148,    14,     9,    20,    52,    53,     3,    20,
     156,     1,    17,     3,     4,     1,    23,     3,     4,    13,
      10,    28,    21,    13,    10,    15,    81,    13,    74,    28,
      29,   102,    22,    19,    24,    25,    26,    27,    46,    98,
      47,    13,    49,     1,    90,     1,    15,     3,     4,    95,
      19,    15,    98,   143,    10,    19,    64,    13,   148,    15,
      18,    89,    14,    70,   110,    28,   156,     1,    20,     3,
       4,     3,     9,   119,    16,   103,    10,    90,    20,    13,
      17,    15,    16,   124,   125,   131,    17,    21,    22,    13,
      24,    25,    26,    27,    28,    12,     1,   143,     3,     1,
      21,     3,   148,   144,   145,   146,   147,    28,    29,     1,
     156,     3,     4,     1,    11,     3,     4,     1,    10,     3,
      16,    13,    10,    15,    20,    13,    14,     1,    18,     3,
       4,     1,     1,     3,     3,    18,    10,    19,    20,    13,
      19,    20,    17,    11,    12,    17,    19,    14,    13,    13,
       9,     5,    14,    19,     6,     8,    19,    18,     7,    19,
      31,    19,     4,    14,   125,   145,    23,    47,    82,   146,
      -1,    27,   147,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    28,    29,    33,    34,    35,    42,    47,    67,
      28,     1,     3,    43,    44,     3,     0,    34,    47,     1,
       3,    36,    37,    13,    38,    67,    19,    20,    13,    38,
      19,    20,    28,    48,    49,    67,     9,    17,     1,     3,
      44,    48,     9,     1,    37,     3,    14,    20,     1,     3,
       4,    10,    13,    15,    45,    54,    56,    57,    58,    60,
      61,     1,    54,    66,    14,     1,    15,    40,    66,    17,
      15,    19,    50,    49,    13,    39,    67,    58,    54,    45,
      46,    12,    11,    18,    19,    50,    40,    41,     1,    18,
      51,    67,    14,    54,    59,    17,    14,    16,    20,    58,
      60,    16,    20,    18,    38,    16,    22,    24,    25,    26,
      27,    28,    34,    50,    52,    53,    54,    56,    14,    20,
      54,    45,    40,    38,    13,    13,    19,    19,    19,    54,
      19,     9,    54,    18,    55,    61,    62,    63,    64,    65,
      55,    19,    54,    14,     5,     6,     7,     8,    14,    19,
      53,    61,    62,    63,    64,    53,    23,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    33,    33,    33,    34,    34,    35,
      36,    36,    36,    37,    37,    38,    38,    39,    39,    40,
      40,    40,    41,    41,    42,    43,    43,    43,    44,    44,
      44,    45,    45,    45,    46,    46,    47,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    50,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    55,    56,    56,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     1,     4,
       1,     3,     1,     4,     1,     4,     1,     4,     1,     1,
       3,     1,     1,     3,     3,     1,     3,     1,     2,     4,
       1,     1,     3,     1,     1,     3,     6,     6,     6,     6,
       1,     3,     2,     5,     6,     1,     3,     1,     2,     1,
       1,     4,     2,     1,     5,     7,     5,     2,     2,     2,
       3,     1,     1,     2,     1,     3,     1,     1,     1,     4,
       3,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     0
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
  case 2: /* CompUnit: Decl  */
#line 27 "./grammerAnalyzer.y"
             {
		yyval = ++ cnt;
		strcpy(str[yyval], "CompUnit");
        	fprintf (fd, "%s -> CompUnit\n", str[yyvsp[0]]);
	}
#line 1358 "y.tab.c"
    break;

  case 3: /* CompUnit: FuncDef  */
#line 32 "./grammerAnalyzer.y"
                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "CompUnit");
        	fprintf (fd, "%s -> CompUnit\n", str[yyvsp[0]]);
	}
#line 1368 "y.tab.c"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 37 "./grammerAnalyzer.y"
                        {
		yyval = ++ cnt;
		strcpy(str[yyval], "CompUnit");
        	fprintf (fd, "%s %s -> CompUnit\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1378 "y.tab.c"
    break;

  case 5: /* CompUnit: CompUnit FuncDef  */
#line 42 "./grammerAnalyzer.y"
                           {
		yyval = ++ cnt;
		strcpy(str[yyval], "CompUnit");
        	fprintf (fd, "%s %s -> CompUnit\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1388 "y.tab.c"
    break;

  case 6: /* CompUnit: empty  */
#line 47 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "CompUnit");
        	fprintf (fd, "empty -> CompUnit\n");
	}
#line 1398 "y.tab.c"
    break;

  case 7: /* Decl: ConstDecl  */
#line 55 "./grammerAnalyzer.y"
                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "Decl");
        	fprintf (fd, "%s -> Decl\n", str[yyvsp[0]]);
	}
#line 1408 "y.tab.c"
    break;

  case 8: /* Decl: VarDecl  */
#line 60 "./grammerAnalyzer.y"
                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "Decl");
        	fprintf (fd, "%s -> Decl\n", str[yyvsp[0]]);
	}
#line 1418 "y.tab.c"
    break;

  case 9: /* ConstDecl: CONST INT ConstDefList SEMICOLON  */
#line 68 "./grammerAnalyzer.y"
                                         {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDecl");
        	fprintf (fd, "%s %s %s %s -> ConstDecl\n",
        		str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1429 "y.tab.c"
    break;

  case 10: /* ConstDefList: ConstDef  */
#line 77 "./grammerAnalyzer.y"
                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDefList");
        	fprintf (fd, "%s -> ConstDefList\n", str[yyvsp[0]]);
	}
#line 1439 "y.tab.c"
    break;

  case 11: /* ConstDefList: ConstDefList COMMA ConstDef  */
#line 82 "./grammerAnalyzer.y"
                                      {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDefList");
        	fprintf (fd, "%s %s %s -> ConstDefList\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1449 "y.tab.c"
    break;

  case 12: /* ConstDefList: error  */
#line 87 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDefList");
	}
#line 1458 "y.tab.c"
    break;

  case 13: /* ConstDef: Ident ConstArray ASSIGN ConstInitVal  */
#line 94 "./grammerAnalyzer.y"
                                             {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDef");
        	fprintf (fd, "%s %s %s %s -> ConstDef\n"
        		, str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1469 "y.tab.c"
    break;

  case 14: /* ConstDef: error  */
#line 100 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstDef");
	}
#line 1478 "y.tab.c"
    break;

  case 15: /* ConstArray: ConstArray LBRACKET ConstExp RBRACKET  */
#line 107 "./grammerAnalyzer.y"
                                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstArray");
        	fprintf (fd, "%s %s %s %s -> ConstArray\n"
        		, str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1489 "y.tab.c"
    break;

  case 16: /* ConstArray: empty  */
#line 113 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstArray");
        	fprintf (fd, "empty -> ConstArray\n");
	}
#line 1499 "y.tab.c"
    break;

  case 17: /* array: array LBRACKET Exp RBRACKET  */
#line 121 "./grammerAnalyzer.y"
                                    {
		yyval = ++ cnt;
		strcpy(str[yyval], "array");
        	fprintf (fd, "%s %s %s %s -> array\n"
        		, str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1510 "y.tab.c"
    break;

  case 18: /* array: empty  */
#line 127 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "array");
        	fprintf (fd, "empty -> array\n");
	}
#line 1520 "y.tab.c"
    break;

  case 19: /* ConstInitVal: ConstExp  */
#line 135 "./grammerAnalyzer.y"
                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstInitVal");
        	fprintf (fd, "%s -> ConstInitVal\n", str[yyvsp[0]]);
	}
#line 1530 "y.tab.c"
    break;

  case 20: /* ConstInitVal: LBRACE ConstInitValList RBRACE  */
#line 140 "./grammerAnalyzer.y"
                                         {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstInitVal");
        	fprintf (fd, "%s %s %s -> ConstInitVal\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1541 "y.tab.c"
    break;

  case 21: /* ConstInitVal: error  */
#line 146 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstInitVal");
	}
#line 1550 "y.tab.c"
    break;

  case 22: /* ConstInitValList: ConstInitVal  */
#line 153 "./grammerAnalyzer.y"
                     {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstInitValList");
        	fprintf (fd, "%s -> ConstInitValList\n", str[yyvsp[0]]);
	}
#line 1560 "y.tab.c"
    break;

  case 23: /* ConstInitValList: ConstInitValList COMMA ConstInitVal  */
#line 158 "./grammerAnalyzer.y"
                                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstInitValList");
        	fprintf (fd, "%s %s %s -> ConstInitValList\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1571 "y.tab.c"
    break;

  case 24: /* VarDecl: INT VarDefList SEMICOLON  */
#line 167 "./grammerAnalyzer.y"
                                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDecl");
        	fprintf (fd, "%s %s %s -> VarDecl\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1581 "y.tab.c"
    break;

  case 25: /* VarDefList: VarDef  */
#line 175 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDefList");
        	fprintf (fd, "%s -> VarDefList\n", str[yyvsp[0]]);
	}
#line 1591 "y.tab.c"
    break;

  case 26: /* VarDefList: VarDefList COMMA VarDef  */
#line 180 "./grammerAnalyzer.y"
                                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDefList");
        	fprintf (fd, "%s %s %s -> VarDefList\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1602 "y.tab.c"
    break;

  case 27: /* VarDefList: error  */
#line 186 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDefList");
	}
#line 1611 "y.tab.c"
    break;

  case 28: /* VarDef: Ident ConstArray  */
#line 193 "./grammerAnalyzer.y"
                         {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDef");
        	fprintf (fd, "%s %s -> VarDef\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1621 "y.tab.c"
    break;

  case 29: /* VarDef: Ident ConstArray ASSIGN InitVal  */
#line 198 "./grammerAnalyzer.y"
                                          {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDef");
        	fprintf (fd, "%s %s %s %s -> VarDef\n"
        		, str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1632 "y.tab.c"
    break;

  case 30: /* VarDef: error  */
#line 204 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "VarDef");
	}
#line 1641 "y.tab.c"
    break;

  case 31: /* InitVal: Exp  */
#line 211 "./grammerAnalyzer.y"
            {
		yyval = ++ cnt;
		strcpy(str[yyval], "InitVal");
        	fprintf (fd, "%s -> InitVal\n", str[yyvsp[0]]);
	}
#line 1651 "y.tab.c"
    break;

  case 32: /* InitVal: LBRACE InitValList RBRACE  */
#line 216 "./grammerAnalyzer.y"
                                    {
		yyval = ++ cnt;
		strcpy(str[yyval], "InitVal");
        	fprintf (fd, "%s %s %s -> InitVal\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1662 "y.tab.c"
    break;

  case 33: /* InitVal: error  */
#line 222 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "InitVal");
	}
#line 1671 "y.tab.c"
    break;

  case 34: /* InitValList: InitVal  */
#line 229 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "InitValList");
        	fprintf (fd, "%s -> InitValList\n", str[yyvsp[0]]);
	}
#line 1681 "y.tab.c"
    break;

  case 35: /* InitValList: InitValList COMMA InitVal  */
#line 234 "./grammerAnalyzer.y"
                                    {
		yyval = ++ cnt;
		strcpy(str[yyval], "InitValList");
        	fprintf (fd, "%s %s %s -> InitValList\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1692 "y.tab.c"
    break;

  case 36: /* FuncDef: INT Ident LPAREN FuncFParams RPAREN Block  */
#line 243 "./grammerAnalyzer.y"
                                                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1703 "y.tab.c"
    break;

  case 37: /* FuncDef: VOID Ident LPAREN FuncFParams RPAREN Block  */
#line 249 "./grammerAnalyzer.y"
                                                     {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1714 "y.tab.c"
    break;

  case 38: /* FuncDef: INT Ident LPAREN FuncFParams RPAREN SEMICOLON  */
#line 258 "./grammerAnalyzer.y"
                                                      {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1725 "y.tab.c"
    break;

  case 39: /* FuncDef: VOID Ident LPAREN FuncFParams RPAREN SEMICOLON  */
#line 264 "./grammerAnalyzer.y"
                                                         {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1736 "y.tab.c"
    break;

  case 40: /* FuncFParams: FuncFParam  */
#line 273 "./grammerAnalyzer.y"
                   {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParams");
        	fprintf (fd, "%s -> FuncFParams\n", str[yyvsp[0]]);
	}
#line 1746 "y.tab.c"
    break;

  case 41: /* FuncFParams: FuncFParams COMMA FuncFParam  */
#line 278 "./grammerAnalyzer.y"
                                       {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParams");
        	fprintf (fd, "%s %s %s -> FuncFParams\n"
        		, str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1757 "y.tab.c"
    break;

  case 42: /* FuncFParam: INT Ident  */
#line 287 "./grammerAnalyzer.y"
                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParam");
        	fprintf (fd, "%s %s -> FuncFParam\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1767 "y.tab.c"
    break;

  case 43: /* FuncFParam: INT Ident LBRACKET RBRACKET ConstArray  */
#line 292 "./grammerAnalyzer.y"
                                                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParam");
        	fprintf (fd, "%s %s %s %s %s -> FuncFParam\n"
        		, str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1778 "y.tab.c"
    break;

  case 44: /* FuncFParam: INT Ident LBRACKET error RBRACKET ConstArray  */
#line 298 "./grammerAnalyzer.y"
                                                       {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParam");
        	fprintf (fd, "%s %s %s %s %s -> FuncFParam\n"
        		, str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]]);
	}
#line 1789 "y.tab.c"
    break;

  case 45: /* FuncFParam: empty  */
#line 304 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncFParam");
        	fprintf (fd, "empty -> FuncFParam\n");
	}
#line 1799 "y.tab.c"
    break;

  case 46: /* Block: LBRACE BlockItemList RBRACE  */
#line 312 "./grammerAnalyzer.y"
                                    {
		yyval = ++ cnt;
		strcpy(str[yyval], "Block");
        	fprintf (fd, "%s %s %s -> Block\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1809 "y.tab.c"
    break;

  case 47: /* BlockItemList: empty  */
#line 320 "./grammerAnalyzer.y"
              {
		yyval = ++ cnt;
		strcpy(str[yyval], "BlockItemList");
        	fprintf (fd, "empty -> BlockItemList\n");
	}
#line 1819 "y.tab.c"
    break;

  case 48: /* BlockItemList: BlockItemList BlockItem  */
#line 325 "./grammerAnalyzer.y"
                                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "BlockItemList");
        	fprintf (fd, "%s %s -> BlockItemList\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1829 "y.tab.c"
    break;

  case 49: /* BlockItem: Decl  */
#line 333 "./grammerAnalyzer.y"
              {
		yyval = ++ cnt;
		strcpy(str[yyval], "BlockItem");
        	fprintf (fd, "%s -> BlockItem\n", str[yyvsp[0]]);
	}
#line 1839 "y.tab.c"
    break;

  case 50: /* BlockItem: Stmt  */
#line 338 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "BlockItem");
        	fprintf (fd, "%s -> BlockItem\n", str[yyvsp[0]]);
	}
#line 1849 "y.tab.c"
    break;

  case 51: /* Stmt: LVal ASSIGN Exp SEMICOLON  */
#line 346 "./grammerAnalyzer.y"
                                  {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s %s %s -> Stmt\n"
        		, str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1860 "y.tab.c"
    break;

  case 52: /* Stmt: Exp SEMICOLON  */
#line 352 "./grammerAnalyzer.y"
                        {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1870 "y.tab.c"
    break;

  case 53: /* Stmt: Block  */
#line 357 "./grammerAnalyzer.y"
                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s -> Stmt\n", str[yyvsp[0]]);
	}
#line 1880 "y.tab.c"
    break;

  case 54: /* Stmt: IF LPAREN Cond RPAREN Stmt  */
#line 362 "./grammerAnalyzer.y"
                                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s %s %s %s -> Stmt\n"
        		, str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1891 "y.tab.c"
    break;

  case 55: /* Stmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 368 "./grammerAnalyzer.y"
                                               {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s %s %s %s %s %s -> Stmt\n"
        		, str[yyvsp[-6]], str[yyvsp[-5]], str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1902 "y.tab.c"
    break;

  case 56: /* Stmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 374 "./grammerAnalyzer.y"
                                        {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s %s %s %s -> Stmt\n"
        		, str[yyvsp[-4]], str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1913 "y.tab.c"
    break;

  case 57: /* Stmt: BREAK SEMICOLON  */
#line 380 "./grammerAnalyzer.y"
                          {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1923 "y.tab.c"
    break;

  case 58: /* Stmt: CONTINUE SEMICOLON  */
#line 385 "./grammerAnalyzer.y"
                             {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1933 "y.tab.c"
    break;

  case 59: /* Stmt: RETURN SEMICOLON  */
#line 390 "./grammerAnalyzer.y"
                           {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1943 "y.tab.c"
    break;

  case 60: /* Stmt: RETURN Exp SEMICOLON  */
#line 395 "./grammerAnalyzer.y"
                               {
		yyval = ++ cnt;
		strcpy(str[yyval], "Stmt");
        	fprintf (fd, "%s %s %s -> Stmt\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1953 "y.tab.c"
    break;

  case 61: /* Exp: AddExp  */
#line 403 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "Exp");
        	fprintf (fd, "%s -> Exp\n", str[yyvsp[0]]);
	}
#line 1963 "y.tab.c"
    break;

  case 62: /* Cond: LOrExp  */
#line 411 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "Cond");
        	fprintf (fd, "%s -> Cond\n", str[yyvsp[0]]);
	}
#line 1973 "y.tab.c"
    break;

  case 63: /* LVal: Ident array  */
#line 419 "./grammerAnalyzer.y"
                    {
		yyval = ++ cnt;
		strcpy(str[yyval], "LVal");
        	fprintf (fd, "%s %s -> LVal\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 1983 "y.tab.c"
    break;

  case 64: /* LVal: error  */
#line 424 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "LVal");
	}
#line 1992 "y.tab.c"
    break;

  case 65: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 431 "./grammerAnalyzer.y"
                          {
		yyval = ++ cnt;
		strcpy(str[yyval], "PrimaryExp");
        	fprintf (fd, "%s %s %s -> PrimaryExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2002 "y.tab.c"
    break;

  case 66: /* PrimaryExp: LVal  */
#line 436 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "PrimaryExp");
        	fprintf (fd, "%s -> PrimaryExp\n", str[yyvsp[0]]);
	}
#line 2012 "y.tab.c"
    break;

  case 67: /* PrimaryExp: Constant  */
#line 441 "./grammerAnalyzer.y"
                   {
		yyval = ++ cnt;
		strcpy(str[yyval], "PrimaryExp");
        	fprintf (fd, "%s -> PrimaryExp\n", str[yyvsp[0]]);
	}
#line 2022 "y.tab.c"
    break;

  case 68: /* UnaryExp: PrimaryExp  */
#line 449 "./grammerAnalyzer.y"
                   {
		yyval = ++ cnt;
		strcpy(str[yyval], "UnaryExp");
        	fprintf (fd, "%s -> UnaryExp\n", str[yyvsp[0]]);
	}
#line 2032 "y.tab.c"
    break;

  case 69: /* UnaryExp: Ident LPAREN FuncRParams RPAREN  */
#line 454 "./grammerAnalyzer.y"
                                          {
		yyval = ++ cnt;
		strcpy(str[yyval], "UnaryExp");
        	fprintf (fd, "%s %s %s %s -> UnaryExp\n",
        	 	str[yyvsp[-3]], str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2043 "y.tab.c"
    break;

  case 70: /* UnaryExp: Ident LPAREN RPAREN  */
#line 460 "./grammerAnalyzer.y"
                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "UnaryExp");
        	fprintf (fd, "%s %s %s -> UnaryExp\n",
        	 	str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2054 "y.tab.c"
    break;

  case 71: /* UnaryExp: UnaryOp UnaryExp  */
#line 466 "./grammerAnalyzer.y"
                           {
		yyval = ++ cnt;
		strcpy(str[yyval], "UnaryExp");
        	fprintf (fd, "%s %s -> UnaryExp\n", str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2064 "y.tab.c"
    break;

  case 72: /* FuncRParams: Exp  */
#line 474 "./grammerAnalyzer.y"
            {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncRParams");
        	fprintf (fd, "%s -> FuncRParams\n", str[yyvsp[0]]);
	}
#line 2074 "y.tab.c"
    break;

  case 73: /* FuncRParams: FuncRParams COMMA Exp  */
#line 479 "./grammerAnalyzer.y"
                                {
		yyval = ++ cnt;
		strcpy(str[yyval], "FuncRParams");
        	fprintf (fd, "%s %s %s -> FuncRParams\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2084 "y.tab.c"
    break;

  case 74: /* MulExp: UnaryExp  */
#line 487 "./grammerAnalyzer.y"
                 {
		yyval = ++ cnt;
		strcpy(str[yyval], "MulExp");
        	fprintf (fd, "%s -> MulExp\n", str[yyvsp[0]]);
	}
#line 2094 "y.tab.c"
    break;

  case 75: /* MulExp: MulExp MulOp UnaryExp  */
#line 492 "./grammerAnalyzer.y"
                                {
		yyval = ++ cnt;
		strcpy(str[yyval], "MulExp");
        	fprintf (fd, "%s %s %s -> MulExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2104 "y.tab.c"
    break;

  case 76: /* AddExp: MulExp  */
#line 500 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "AddExp");
        	fprintf (fd, "%s -> AddExp\n", str[yyvsp[0]]);
	}
#line 2114 "y.tab.c"
    break;

  case 77: /* AddExp: AddExp AddOp MulExp  */
#line 505 "./grammerAnalyzer.y"
                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "AddExp");
        	fprintf (fd, "%s %s %s -> AddExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2124 "y.tab.c"
    break;

  case 78: /* RelExp: AddExp  */
#line 513 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "RelExp");
        	fprintf (fd, "%s -> RelExp\n", str[yyvsp[0]]);
	}
#line 2134 "y.tab.c"
    break;

  case 79: /* RelExp: RelExp CmpOp AddExp  */
#line 518 "./grammerAnalyzer.y"
                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "RelExp");
        	fprintf (fd, "%s %s %s -> RelExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2144 "y.tab.c"
    break;

  case 80: /* EqExp: RelExp  */
#line 526 "./grammerAnalyzer.y"
               {
		yyval = ++ cnt;
		strcpy(str[yyval], "EqExp");
        	fprintf (fd, "%s -> EqExp\n", str[yyvsp[0]]);
	}
#line 2154 "y.tab.c"
    break;

  case 81: /* EqExp: EqExp EqOp RelExp  */
#line 531 "./grammerAnalyzer.y"
                            {
		yyval = ++ cnt;
		strcpy(str[yyval], "EqExp");
        	fprintf (fd, "%s %s %s -> EqExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2164 "y.tab.c"
    break;

  case 82: /* LAndExp: EqExp  */
#line 539 "./grammerAnalyzer.y"
              {
		yyval = ++ cnt;
		strcpy(str[yyval], "LAndExp");
        	fprintf (fd, "%s -> LAndExp\n", str[yyvsp[0]]);
	}
#line 2174 "y.tab.c"
    break;

  case 83: /* LAndExp: LAndExp AndOp EqExp  */
#line 544 "./grammerAnalyzer.y"
                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "LAndExp");
        	fprintf (fd, "%s %s %s -> LAndExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2184 "y.tab.c"
    break;

  case 84: /* LOrExp: LAndExp  */
#line 552 "./grammerAnalyzer.y"
                {
		yyval = ++ cnt;
		strcpy(str[yyval], "LOrExp");
        	fprintf (fd, "%s -> LOrExp\n", str[yyvsp[0]]);
	}
#line 2194 "y.tab.c"
    break;

  case 85: /* LOrExp: LOrExp OrOp LAndExp  */
#line 557 "./grammerAnalyzer.y"
                              {
		yyval = ++ cnt;
		strcpy(str[yyval], "LOrExp");
        	fprintf (fd, "%s %s %s -> LOrExp\n", str[yyvsp[-2]], str[yyvsp[-1]], str[yyvsp[0]]);
	}
#line 2204 "y.tab.c"
    break;

  case 86: /* ConstExp: Exp  */
#line 565 "./grammerAnalyzer.y"
            {
		yyval = ++ cnt;
		strcpy(str[yyval], "ConstExp");
        	fprintf (fd, "%s -> ConstExp\n", str[yyvsp[0]]);
	}
#line 2214 "y.tab.c"
    break;


#line 2218 "y.tab.c"

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

#line 575 "./grammerAnalyzer.y"


int main(int argc, char **argv) {
    freopen (argv[1], "r", stdin);
    fd = fopen("detail.txt", "w");
    ft = fopen("error.txt", "w" );
    yyparse();
    return 0;
}

int yywrap() {
    return 1;
}

int yyerror(const char* message) {
    fprintf(ft, "[error] %s", message);
    fprintf(ft, " (%d, %d): \"%s\"\n", num_line, num_char, yytext);
}
