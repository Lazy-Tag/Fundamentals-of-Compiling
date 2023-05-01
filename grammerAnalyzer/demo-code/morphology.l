%option noyywrap
%{

#include <stdio.h>
#include "y.tab.h"

extern int cnt;
extern char Labe[100000][50];

int num_line = 1, num_char = 1;

%}

empty [ \t\r]
numberD (-?)([1-9][0-9]+)|([0-9])

%%

"+"      { num_char += yyleng; yylval = ++cnt; return OP; }

{numberD} {
    if (yyleng > 10) printf ("Waring! ");
    num_char += yyleng;
    yylval = ++cnt;
    strcpy(Labe[cnt], yytext);
    return NUMBER;
}

\n { num_line++; num_char = 1; }

{empty} { if (yytext != "\r") num_char += yyleng; }

. {
    printf ("%s: T, (%d, %d)\n", yytext, num_line, num_char);
    num_char += yyleng;
    return ERROR;
}

%%
