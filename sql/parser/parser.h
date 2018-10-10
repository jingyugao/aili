#ifndef SQL_PARSER_PARSER_H
#define SQL_PARSER_PARSER_H
#include"../node/node.h"

extern "C" {
void yyerror(const char *s);
int yylex(void);
int yyparse(void);
}

Node* raw_parser(const char* sql_str);
#endif // SQL_PARSER_PARSER_H