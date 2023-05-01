flex ./morphology.l
yacc -d ./grammar.y
gcc y.tab.c lex.yy.c -o mc -O2 -w
./mc ./test.sy