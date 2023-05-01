import re

def build_parsing_table(rules):
    l = []
    r = []
    for rule in rules:
        lhs, rhs = rule.split('->')
        l_list = lhs.split()
        rsh = rhs.replace(" ", "").replace("\n", "")
        l.append(l_list)
        r.append(rsh)
    return l, r

Non_terminator = ["CompUnit", "Decl", "ConstDecl", "ConstDefList", "ConstDef",
                  "array", "ConstInitVal", "ConstInitValList", "VarDecl", "VarDefList",
                  "VarDef", "InitVal", "InitValList", "FuncDef", "FuncDef", "FuncFParams",
                  "FuncFParam", "Block", "BlockItemList", "BlockItem", "Stmt",
                  "Exp", "Cond", "LVal", "PrimaryExp", "UnaryExp",
                  "FuncRParams", "MulExp", "AddExp", "RelExp", "EqExp",
                  "LAndExp", "LOrExp", "ConstExp"]

idx = 0
node = 1
def build_tree(fa, part, l, r):
    global idx, Non_terminator, node
    if idx == len(l):
        return ;
    key = r[idx]
    value = l[idx]
    idx += 1
    cur = node
    node += 1
    info = "node{}[label = \"".format(cur)
    cnt = 0
    dict = {}
    for v in value:
        dict[v] = cnt
        if len(v) <= 2:
            v = ''.join([f"\\{c}" for c in v])
        info += "<f{}> ".format(cnt) + v + "|"
        cnt += 1;
    info = info[:-1]
    info += "\"];\n"
    g.write(info)

    g.write("\"node{}\":f{}->\"node{}\";\n".format(fa, part, cur))
    value.reverse()
    for v in value:
        if v in Non_terminator:
            build_tree(cur, dict[v], l, r)

with open('detail.txt') as f:
    rules = f.readlines()
    l, r = build_parsing_table(rules);
    l.reverse(), r.reverse();
    with open('graph.dot', 'w') as g:
        g.write("digraph \" \"{")
        g.write("node [shape = record,height=.1]")
        g.write("node0[label = \"<f0> CompUnit\"];")
        build_tree(0, 0, l, r)
        g.write("}")
