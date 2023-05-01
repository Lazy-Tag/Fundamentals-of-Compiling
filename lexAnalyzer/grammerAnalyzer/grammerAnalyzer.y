%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cnt;
char str[100000][50]
extern int yylineno, colunm;

%}

%token Ident
%token NUMBER

%%

CompUnit:
	CompUnit Decl
	|  CompUnit FuncDef {
		$$ = ++ cnt;
		strcpy(str[$$], "CompUnit");
        	printf ("%s %s -> CompUnit\n", str[$1], str[$2]);
	}
;

Decl:
	ConstDecl
	| VarDecl {
		$$ = ++ cnt;
		strcpy(str[$$], "Decl");
        	printf ("%s -> Decl\n", str[$1]);
	}
;

ConstDecl:
	"const" BType ConstDefList ';'{
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDecl");
        	printf ("%s %s %s %s -> ConstDecl\n",
        		str[$1], str[$2], str[$3], str[$4]);
	}
;

ConstDefList:
	ConstDef {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDefList");
        	printf ("%s -> ConstDefList\n", str[$1]);
	}
	| ConstDefList ',' ConstDef {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDefList");
        	printf ("%s %s %s -> ConstDefList\n", str[$1], str[$2], str[$3]);
	}
;

BType:
	"int" {
		$$ = ++ cnt;
		strcpy(str[$$], "Decl");
        	printf ("%s -> ConstDefList\n", str[$1]);
	}
;

ConstDef:
	Ident array '=' ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstDef");
        	printf ("%s %s %s %s -> ConstDef\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
;

array:
	array '[' ConstExp ']' {
		$$ = ++ cnt;
		strcpy(str[$$], "array");
        	printf ("%s %s %s %s -> array\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	} | empty
;

ConstInitVal:
	ConstExp {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitVal");
        	printf ("%s -> ConstInitVal\n", str[$1]);
	}
	| '{' ConstInitValList '}' {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitVal");
        	printf ("%s %s %s -> ConstInitVal\n"
        		, str[$1], str[$2], str[$3]);
	}
;

ConstInitValList:
	ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitValList");
        	printf ("%s -> ConstInitValList\n", str[$1]);
	}
	| ConstInitValList ',' ConstInitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstInitValList");
        	printf ("%s %s %s -> ConstInitValList\n"
        		, str[$1], str[$2], str[$3]);
	}
;

VarDecl:
	BType VarDefList {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDecl");
        	printf ("%s %s -> VarDecl\n", str[$1], str[$2]);
	}
;

VarDefList:
	VarDef {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDefList");
        	printf ("%s -> VarDefList\n", str[$1]);
	}
	| VarDefList ',' VarDef {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDefList");
        	printf ("%s %s %s -> VarDefList\n"
        		, str[$1], str[$2], str[$3]);
	}
;

VarDef:
	Ident array {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDef");
        	printf ("%s %s %s -> VarDef\n"
        		, str[$1], str[$2], str[$3]);
	}
	| Ident array '=' InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "VarDef");
        	printf ("%s %s %s %s -> VarDef\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
;

InitVal:
	Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "InitVal");
        	printf ("%s -> InitVal\n", str[$1]);
	}
	| '{' InitValList '}' {
		$$ = ++ cnt;
		strcpy(str[$$], "InitVal");
        	printf ("%s %s %s -> InitVal\n"
        		, str[$1], str[$2], str[$3]);
	}
;

InitValList:
	InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "InitValList");
        	printf ("%s -> InitValList\n", str[$1]);
	}
	| InitValList ',' InitVal {
		$$ = ++ cnt;
		strcpy(str[$$], "InitValList");
        	printf ("%s %s %s -> InitValList\n"
        		, str[$1], str[$2], str[$3]);
	}
;

FuncDef:
	FuncType Ident '(' FuncFParams ')' Block {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	printf ("%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
;

FuncDef:
	FuncType Ident '(' FuncFParams ')' ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncDef");
        	printf ("%s %s %s %s %s %s -> FuncDef\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6]);
	}
;

FuncType:
	"void" | "int" {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncType");
        	printf ("%s -> FuncType\n", str[$1]);
	}
;

FuncFParams:
	FuncFParam {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParams");
        	printf ("%s -> FuncFParams\n", str[$1]);
	}
	| FuncFParams ',' FuncFParam {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParams");
        	printf ("%s %s %s -> FuncFParams\n"
        		, str[$1], str[$2], str[$3]);
	}
;

FuncFParam:
	BType Ident {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	printf ("%s %s %s -> FuncFParam\n"
        		, str[$1], str[$2], str[$3]);
	}
	| BType Ident '[' ']' array {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncFParam");
        	printf ("%s %s %s %s %s -> FuncFParam\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
;

Block:
	'{' Block BlockItem '}' {
		$$ = ++ cnt;
		strcpy(str[$$], "Block");
        	printf ("%s %s %s %s -> Block\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| empty
;

BlockItem:
	Decl | Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "BlockItem");
        	printf ("%s %s -> BlockItem\n", str[$1], str[$2]);
	}
;

Stmt:
	LVal '=' Exp ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4]);
	}
	| Exp ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| Block  {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s -> Stmt\n", str[$1]);
	}
	| 'if' '(' Cond ')' Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| 'if' '(' Cond ')' Stmt 'else' Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s %s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5], str[$6], str[$7]);
	}
	| 'while' '(' Cond ')' Stmt {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s %s %s %s -> Stmt\n"
        		, str[$1], str[$2], str[$3], str[$4], str[$5]);
	}
	| 'break' ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| 'continue' ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| 'return' ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s -> Stmt\n", str[$1], str[$2]);
	}
	| 'return' Exp ';' {
		$$ = ++ cnt;
		strcpy(str[$$], "Stmt");
        	printf ("%s %s %s -> Stmt\n", str[$1], str[$2], str[$3]);
	}
;

Exp:
	AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "Exp");
        	printf ("%s -> Exp\n", str[$1]);
	}
;

Cond:
	LOrExp {
		$$ = ++ cnt;
		strcpy(str[$$], "Cond");
        	printf ("%s -> Cond\n", str[$1]);
	}
;

LVal:
	Ident array {
		$$ = ++ cnt;
		strcpy(str[$$], "LVal");
        	printf ("%s %s -> LVal\n", str[$1], str[$2]);
	}
;

PrimaryExp:
	'(' Exp ')' {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	printf ("%s %s %s -> PrimaryExp\n", str[$1], str[$2], str[$3]);
	}
	| LVal {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	printf ("%s -> PrimaryExp\n", str[$1]);
	}
	| NUMBER {
		$$ = ++ cnt;
		strcpy(str[$$], "PrimaryExp");
        	printf ("%s -> PrimaryExp\n", str[$1]);
	}
;

UnaryExp:
	PrimaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	printf ("%s -> UnaryExp\n", str[$1]);
	}
	| Ident '(' FuncRParams ')' {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	printf ("%s %s %s %s -> UnaryExp\n",
        	 	str[$1], str[$2], str[$3], str[$4]);
	}
	| UnaryOp UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryExp");
        	printf ("%s %s -> UnaryExp\n", str[$1], str[$2]);
	}
;

UnaryOp:
	'+'|'−'|'!' {
		$$ = ++ cnt;
		strcpy(str[$$], "UnaryOp");
        	printf ("%s -> UnaryOp\n", str[$1]);
	}
;

FuncRParams:
	Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncRParams");
        	printf ("%s -> FuncRParams\n", str[$1]);
	}
	| FuncRParams ',' Exp {
		$$ = ++ cnt;
		strcpy(str[$$], "FuncRParams");
        	printf ("%s %s %s -> FuncRParams\n", str[$1], str[$2], str[$3]);
	}
;

MulExp:
	UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "MulExp");
        	printf ("%s -> MulExp\n", str[$1]);
	}
	| MulExp MulOp UnaryExp {
		$$ = ++ cnt;
		strcpy(str[$$], "MulExp");
        	printf ("%s %s %s -> MulExp\n", str[$1], str[$2], str[$3]);
	}
;

MulOp:
	'*'|'/'|'%' {
		$$ = ++ cnt;
		strcpy(str[$$], "MulOp");
        	printf ("%s -> MulOp\n", str[$1]);
	}
;

AddExp:
	MulExp {
		$$ = ++ cnt;
		strcpy(str[$$], "AddExp");
        	printf ("%s -> AddExp\n", str[$1]);
	}
	| AddExp AddOp MulExp {
		$$ = ++ cnt;
		strcpy(str[$$], "AddExp");
        	printf ("%s %s %s -> AddExp\n", str[$1], str[$2], str[$3]);
	}
;

AddOp:
	'+'|'-' {
		$$ = ++ cnt;
		strcpy(str[$$], "AddOp");
        	printf ("%s -> AddOp\n", str[$1]);
	}
;

RelExp:
	AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "RelExp");
        	printf ("%s -> RelExp\n", str[$1]);
	}
	| RelExp RelOp AddExp {
		$$ = ++ cnt;
		strcpy(str[$$], "RelExp");
        	printf ("%s %s %s -> RelExp\n", str[$1], str[$2], str[$3]);
	}
;

RelOp:
	 '<'|'>'|'<='|'>=' {
	 	$$ = ++ cnt;
		strcpy(str[$$], "RelOp");
        	printf ("%s -> RelOp\n", str[$1]);
	 }
;

EqExp:
	RelExp {
		$$ = ++ cnt;
		strcpy(str[$$], "EqExp");
        	printf ("%s -> EqExp\n", str[$1]);
	}
	| EqExp EqOp RelExp {
		$$ = ++ cnt;
		strcpy(str[$$], "EqExp");
        	printf ("%s %s %s -> EqExp\n", str[$1], str[$2], str[$3]);
	}
;

EqOp:
	"=="|"!=" {
		$$ = ++ cnt;
		strcpy(str[$$], "EqOp");
        	printf ("%s -> EqOp\n", str[$1]);
	}
;

LAndExp:
	EqExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LAndExp");
        	printf ("%s -> LAndExp\n", str[$1]);
	}
	| LAndExp '&&' EqExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LAndExp");
        	printf ("%s %s %s -> LAndExp\n", str[$1], str[$2], str[$3]);
	}
;

LOrExp:
	LAndExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LOrExp");
        	printf ("%s -> LOrExp\n", str[$1]);
	}
	| LOrExp '||' LAndExp {
		$$ = ++ cnt;
		strcpy(str[$$], "LOrExp");
        	printf ("%s %s %s -> LOrExp\n", str[$1], str[$2], str[$3]);
	}
;

ConstExp:
	NUMBER {
		$$ = ++ cnt;
		strcpy(str[$$], "ConstExp");
        	printf ("%s -> ConstExp\n", str[$1]);
	}
;

empty:
     ;

%%

int main()
{
    freopen (argv[1], "r", stdin);
    yyparse();
    return 0;
}

int yywrap() {
    return 1;
}

int yyerror(const char* message)
{
    printf("Error: %s\n", message);
    printf(" (%d, %d): \"%s\"\n", yylineno, colunm, yytext);
    return 0;
}
