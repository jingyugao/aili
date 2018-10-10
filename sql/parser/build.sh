#!/bin/bash
rm  a.out 

set -e
lex scan.l
yacc -dy parser.ypp

g++ -g -O1 -w lex.yy.c  y.tab.c ../node/node.cpp parser_test.cpp -ll -ly
./a.out

