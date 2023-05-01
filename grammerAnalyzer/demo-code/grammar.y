%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex(void); 
extern int yyparse(void); 
extern int num_char, num_line;
extern char *yytext;

FILE *ft, *fd;

int cnt = 0;
int sum = 0;
char Labe[100000][50];


int yywrap() {
	return 1;
}

void yyerror(const char *s) {
	printf("[error] %s", s);
    printf(" (%d, %d): \"%s\"\n", num_line, num_char, yytext);
}

int main(int argc, char *argv[]) {
	freopen (argv[1], "r", stdin);

    yyparse();

	return 0;
}
%}

%token OP
%token NUMBER
%token ERROR

%%
CompUnit: 
    VAL OP VAL { 
        $$ = ++cnt;
        strcpy(Labe[$$], "CompUnit");
        printf ("%s + %s\n", Labe[$1], Labe[$3]);
    }
;
VAL:
    NUMBER {
        $$ = ++cnt;
        strcpy(Labe[$$], yytext);
    }
;
%%