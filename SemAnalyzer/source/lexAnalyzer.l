%option noyywrap
%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

int num_line = 1, num_char = 1;
extern int cnt;
extern char str[100000][50];
extern FILE* ft;
%}

%%

const {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return CONST;
}

if {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return IF;
}

else {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return ELSE;
}

while {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return WHILE;
}

break {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return BREAK;
}

continue {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return CONTINUE;
}

return {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return RETURN;
}

int {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return INT;
}

void {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return VOID;
}

(\() {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return LPAREN;
}

(\)) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return RPAREN;
}

(\{) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return LBRACE;
}

(\}) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return RBRACE;
}

(\[) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return LBRACKET;
}

(\]) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return RBRACKET;
}

(;) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return SEMICOLON;
}

(,) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return COMMA;
}

(<[=]?|>[=]?) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return CmpOp;
}

(==|!=) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return EqOp;
}

(&&) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return AndOp;
}

(\|\|) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return OrOp;
}

(=) {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return ASSIGN;
}

[+-] {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return AddOp;
}

[+\-!] {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return UnaryOp;
}

[*\/%] {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return MulOp;
}

[a-zA-Z_][a-zA-Z0-9_]* {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return Ident;
}

(0[xX][0-9A-Fa-f]+)|(0[0-7]+)|[0-9]+|([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)|'([^'\n]|\\')*'|true|false {
    num_char += yyleng; yylval = ++cnt;
    strcpy(str[cnt], yytext);
    return Constant;
}

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/|"//"(.)* {
    num_char += yyleng;
}

\n { num_line++; num_char = 1; }

[ \t\r] { if (yytext != "\r") num_char += yyleng; }

[0-9][a-zA-Z0-9_]*|. {
    printf("%s: T, (%d, %d)\n", yytext, num_line, num_char);
    strcpy(str[cnt], yytext);
    num_char += yyleng;
    return Ident;
}

%%