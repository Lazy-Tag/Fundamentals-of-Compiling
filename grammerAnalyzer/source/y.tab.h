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
    ERROR = 285                    /* ERROR  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
