/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WORD = 258,
     LITERAL = 259,
     INT = 260,
     FLOAT = 261,
     NONE = 262,
     CREATE = 263,
     DROP = 264,
     SET = 265,
     JOIN = 266,
     ON = 267,
     AS = 268,
     DATABASE = 269,
     TABLE = 270,
     INDEX = 271,
     HELP = 272,
     VALUES = 273,
     INSERT = 274,
     DELETE = 275,
     PRIMARY = 276,
     T_INT = 277,
     T_FLOAT = 278,
     T_VARCHAR = 279,
     UPDATE = 280,
     INTO = 281,
     AND = 282,
     OR = 283,
     NOT = 284,
     EQ = 285,
     NE = 286,
     LT = 287,
     LE = 288,
     GT = 289,
     GE = 290,
     SELECT = 291,
     FROM = 292,
     WHERE = 293
   };
#endif
/* Tokens.  */
#define WORD 258
#define LITERAL 259
#define INT 260
#define FLOAT 261
#define NONE 262
#define CREATE 263
#define DROP 264
#define SET 265
#define JOIN 266
#define ON 267
#define AS 268
#define DATABASE 269
#define TABLE 270
#define INDEX 271
#define HELP 272
#define VALUES 273
#define INSERT 274
#define DELETE 275
#define PRIMARY 276
#define T_INT 277
#define T_FLOAT 278
#define T_VARCHAR 279
#define UPDATE 280
#define INTO 281
#define AND 282
#define OR 283
#define NOT 284
#define EQ 285
#define NE 286
#define LT 287
#define LE 288
#define GT 289
#define GE 290
#define SELECT 291
#define FROM 292
#define WHERE 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "parser.ypp"
{
int ival;
float fval;
char *sval;
CondOp opval;
Node* n;
}
/* Line 1529 of yacc.c.  */
#line 133 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

