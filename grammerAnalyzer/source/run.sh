flex ./lexAnalyzer.l
yacc -d ./grammerAnalyzer.y
gcc y.tab.c lex.yy.c -o mc -O2 -w
./mc ./1.sy
python3 ./tree.py
dot -Tpng -o graph.png graph.dot