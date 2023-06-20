%{
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
%}

%token Ident
%token Constant
%token CmpOp EqOp AndOp OrOp ASSIGN UnaryOp AddOp MulOp
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA
%token CONST IF ELSE WHILE BREAK CONTINUE RETURN INT VOID
%token ERROR
%left LOWER_THAN_ELSE

%%

CompUnit:
	Decl {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	fprintf (fd, "%s -> CompUnit\n", str[$1]);
	}
	| FuncDef {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	fprintf (fd, "%s -> CompUnit\n", str[$1]);
	}
	| CompUnit Decl {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	fprintf (fd, "%s %s -> CompUnit\n", str[$1], str[$2]);
	}
	| CompUnit FuncDef {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	fprintf (fd, "%s %s -> CompUnit\n", str[$1], str[$2]);
	}
	| empty {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	fprintf (fd, "empty -> CompUnit\n");
	}
;

Decl:
	ConstDecl {
		$$ = ++ cnt;
		strcpy(str[$$], "Decl");
        	fprintf (fd, "%s -> Decl\n", str[$1]);
	}
	| VarDecl {
		$$ = ++ cnt;
		strcpy(str[$$], "Decl");
        	fprintf (fd, "%s -> Decl\n", str[$1]);
	}
;

ConstDecl:
	CONST INT ConstDefList SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDecl");
        	fprintf (fd, "%s %s %s %s -> ConstDecl\n",
        		str[$1], str[$2], str[$3], str[$4]);
	}
;

ConstDefList:
	ConstDef {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDefList");
        	fprintf (fd, "%s -> ConstDefList\n", str[$1]);
	}
	| ConstDefList COMMA ConstDef {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDefList");
        	fprintf (fd, "%s %s %s -> ConstDefList\n", str[$1], str[$2], str[$3]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDefList");
	}
;

ConstDef:
	Ident ConstArray ASSIGN ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDef");
        	fprintf (fd, "%s %s %s %s -> ConstDef\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDef");
	}
;

ConstArray:
	ConstArray LBRACKET ConstExp RBRACKET {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstArray");
        	fprintf (fd, "%s %s %s %s -> ConstArray\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| empty {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstArray");
        	fprintf (fd, "empty -> ConstArray\n");
	}
;

array:
	array LBRACKET Exp RBRACKET {
		$$ = ++ cnt;
		strcpy(str[$$], "array");
        	fprintf (fd, "%s %s %s %s -> array\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| empty {
		$$ = ++ cnt;
		strcpy(str[$$], "array");
        	fprintf (fd, "empty -> array\n");
	}
;

ConstInitVal:
	ConstExp {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitVal");
        	fprintf (fd, "%s -> ConstInitVal\n", str[$1]);
	}
	| LBRACE ConstInitValList RBRACE {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitVal");
        	fprintf (fd, "%s %s %s -> ConstInitVal\n"
        		, str[$1], str[$2], str[$3]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitVal");
	}
;

ConstInitValList:
	ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitValList");
        	fprintf (fd, "%s -> ConstInitValList\n", str[$1]);
	}
	| ConstInitValList COMMA ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitValList");
        	fprintf (fd, "%s %s %s -> ConstInitValList\n"
        		, str[$1], str[$2], str[$3]);
	}
;

VarDecl:
	INT VarDefList SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDecl");
        	fprintf (fd, "%s %s %s -> VarDecl\n", str[$1], str[$2], str[$3]);
	}
;

VarDefList:
	VarDef {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDefList");
        	fprintf (fd, "%s -> VarDefList\n", str[$1]);
	}
	| VarDefList COMMA VarDef {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDefList");
        	fprintf (fd, "%s %s %s -> VarDefList\n"
        		, str[$1], str[$2], str[$3]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDefList");
	}
;

VarDef:
	Ident ConstArray {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDef");
        	fprintf (fd, "%s %s -> VarDef\n", str[$1], str[$2]);
	}
	| Ident ConstArray ASSIGN InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDef");
        	fprintf (fd, "%s %s %s %s -> VarDef\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDef");
	}
;

InitVal:
	Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "InitVal");
        	fprintf (fd, "%s -> InitVal\n", str[$1]);
	}
	| LBRACE InitValList RBRACE {
		$$ = ++ cnt;
		strcpy(str[$$], "InitVal");
        	fprintf (fd, "%s %s %s -> InitVal\n"
        		, str[$1], str[$2], str[$3]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "InitVal");
	}
;

InitValList:
	InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "InitValList");
        	fprintf (fd, "%s -> InitValList\n", str[$1]);
	}
	| InitValList COMMA InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "InitValList");
        	fprintf (fd, "%s %s %s -> InitValList\n"
        		, str[$1], str[$2], str[$3]);
	}
;

FuncDef:
	INT Ident LPAREN FuncFParams RPAREN Block {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
	| VOID Ident LPAREN FuncFParams RPAREN Block {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
;

FuncDef:
	INT Ident LPAREN FuncFParams RPAREN SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
	| VOID Ident LPAREN FuncFParams RPAREN SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	fprintf (fd, "%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
;

FuncFParams:
	FuncFParam {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParams");
        	fprintf (fd, "%s -> FuncFParams\n", str[$1]);
	}
	| FuncFParams COMMA FuncFParam {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParams");
        	fprintf (fd, "%s %s %s -> FuncFParams\n"
        		, str[$1], str[$2], str[$3]);
	}
;

FuncFParam:
	INT Ident {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	fprintf (fd, "%s %s -> FuncFParam\n", str[$1], str[$2]);
	}
	| INT Ident LBRACKET RBRACKET ConstArray {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	fprintf (fd, "%s %s %s %s %s -> FuncFParam\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| INT Ident LBRACKET error RBRACKET ConstArray {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	fprintf (fd, "%s %s %s %s %s -> FuncFParam\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| empty {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	fprintf (fd, "empty -> FuncFParam\n");
	}
;

Block:
	LBRACE BlockItemList RBRACE {
		$$ = ++ cnt;
		strcpy(str[$$], "Block");
        	fprintf (fd, "%s %s %s -> Block\n", str[$1], str[$2], str[$3]);
	}
;

BlockItemList:
	empty {
		$$ = ++ cnt;
		strcpy(str[$$], "BlockItemList");
        	fprintf (fd, "empty -> BlockItemList\n");
	}
	| BlockItemList BlockItem {
		$$ = ++ cnt;
		strcpy(str[$$], "BlockItemList");
        	fprintf (fd, "%s %s -> BlockItemList\n", str[$1], str[$2]);
	}
;

BlockItem:
	 Decl {
		$$ = ++ cnt;
		strcpy(str[$$], "BlockItem");
        	fprintf (fd, "%s -> BlockItem\n", str[$1]);
	}
	| Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "BlockItem");
        	fprintf (fd, "%s -> BlockItem\n", str[$1]);
	}
;

Stmt:
	LVal ASSIGN Exp SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| Exp SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| Block  {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s -> Stmt\n", str[$1]);
	}
	| IF LPAREN Cond RPAREN Stmt %prec IF {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| IF LPAREN Cond RPAREN Stmt ELSE Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s %s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6], str[$7]);
	}
	| WHILE LPAREN Cond RPAREN Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| BREAK SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| CONTINUE SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| RETURN SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| RETURN Exp SEMICOLON {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	fprintf (fd, "%s %s %s -> Stmt\n", str[$1], str[$2], str[$3]);
	}
;

Exp:
	AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "Exp");
        	fprintf (fd, "%s -> Exp\n", str[$1]);
	}
;

Cond:
	LOrExp {
		$$ = ++ cnt;
		strcpy(str[$$], "Cond");
        	fprintf (fd, "%s -> Cond\n", str[$1]);
	}
;

LVal:
	Ident array {
		$$ = ++ cnt;
		strcpy(str[$$], "LVal");
        	fprintf (fd, "%s %s -> LVal\n", str[$1], str[$2]);
	}
	| error {
		$$ = ++ cnt;
		strcpy(str[$$], "LVal");
	}
;

PrimaryExp:
	LPAREN Exp RPAREN {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	fprintf (fd, "%s %s %s -> PrimaryExp\n", str[$1], str[$2], str[$3]);
	}
	| LVal {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	fprintf (fd, "%s -> PrimaryExp\n", str[$1]);
	}
	| Constant {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	fprintf (fd, "%s -> PrimaryExp\n", str[$1]);
	}
;

UnaryExp:
	PrimaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	fprintf (fd, "%s -> UnaryExp\n", str[$1]);
	}
	| Ident LPAREN FuncRParams RPAREN {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	fprintf (fd, "%s %s %s %s -> UnaryExp\n",
        	 	str[$1], str[$2], str[$3], str[$4]);
	}
	| Ident LPAREN RPAREN {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	fprintf (fd, "%s %s %s -> UnaryExp\n",
        	 	str[$1], str[$2], str[$3]);
	}
	| UnaryOp UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	fprintf (fd, "%s %s -> UnaryExp\n", str[$1], str[$2]);
	}
;

FuncRParams:
	Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncRParams");
        	fprintf (fd, "%s -> FuncRParams\n", str[$1]);
	}
	| FuncRParams COMMA Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncRParams");
        	fprintf (fd, "%s %s %s -> FuncRParams\n", str[$1], str[$2], str[$3]);
	}
;

MulExp:
	UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "MulExp");
        	fprintf (fd, "%s -> MulExp\n", str[$1]);
	}
	| MulExp MulOp UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "MulExp");
        	fprintf (fd, "%s %s %s -> MulExp\n", str[$1], str[$2], str[$3]);
	}
;

AddExp:
	MulExp {
		$$ = ++ cnt;
		strcpy(str[$$], "AddExp");
        	fprintf (fd, "%s -> AddExp\n", str[$1]);
	}
	| AddExp AddOp MulExp {
		$$ = ++ cnt;
		strcpy(str[$$], "AddExp");
        	fprintf (fd, "%s %s %s -> AddExp\n", str[$1], str[$2], str[$3]);
	}
;

RelExp:
	AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "RelExp");
        	fprintf (fd, "%s -> RelExp\n", str[$1]);
	}
	| RelExp CmpOp AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "RelExp");
        	fprintf (fd, "%s %s %s -> RelExp\n", str[$1], str[$2], str[$3]);
	}
;

EqExp:
	RelExp {
		$$ = ++ cnt;
		strcpy(str[$$], "EqExp");
        	fprintf (fd, "%s -> EqExp\n", str[$1]);
	}
	| EqExp EqOp RelExp {
		$$ = ++ cnt;
		strcpy(str[$$], "EqExp");
        	fprintf (fd, "%s %s %s -> EqExp\n", str[$1], str[$2], str[$3]);
	}
;

LAndExp:
	EqExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LAndExp");
        	fprintf (fd, "%s -> LAndExp\n", str[$1]);
	}
	| LAndExp AndOp EqExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LAndExp");
        	fprintf (fd, "%s %s %s -> LAndExp\n", str[$1], str[$2], str[$3]);
	}
;

LOrExp:
	LAndExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LOrExp");
        	fprintf (fd, "%s -> LOrExp\n", str[$1]);
	}
	| LOrExp OrOp LAndExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LOrExp");
        	fprintf (fd, "%s %s %s -> LOrExp\n", str[$1], str[$2], str[$3]);
	}
;

ConstExp:
	Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstExp");
        	fprintf (fd, "%s -> ConstExp\n", str[$1]);
	}
;

empty:
;

%%

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
