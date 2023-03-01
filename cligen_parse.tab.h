/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CLIGEN_PARSE_CLIGEN_PARSE_TAB_H_INCLUDED
# define YY_CLIGEN_PARSE_CLIGEN_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cligen_parsedebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MY_EOF = 258,                  /* MY_EOF  */
    V_RANGE = 259,                 /* V_RANGE  */
    V_LENGTH = 260,                /* V_LENGTH  */
    V_CHOICE = 261,                /* V_CHOICE  */
    V_KEYWORD = 262,               /* V_KEYWORD  */
    V_REGEXP = 263,                /* V_REGEXP  */
    V_FRACTION_DIGITS = 264,       /* V_FRACTION_DIGITS  */
    V_SHOW = 265,                  /* V_SHOW  */
    V_TREENAME = 266,              /* V_TREENAME  */
    V_TRANSLATE = 267,             /* V_TRANSLATE  */
    V_PREFERENCE = 268,            /* V_PREFERENCE  */
    DOUBLEPARENT = 269,            /* DOUBLEPARENT  */
    DQ = 270,                      /* DQ  */
    DQP = 271,                     /* DQP  */
    PDQ = 272,                     /* PDQ  */
    SETS = 273,                    /* SETS  */
    NAME = 274,                    /* NAME  */
    NUMBER = 275,                  /* NUMBER  */
    DECIMAL = 276,                 /* DECIMAL  */
    CHARS = 277,                   /* CHARS  */
    HELPSTR = 278                  /* HELPSTR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MY_EOF 258
#define V_RANGE 259
#define V_LENGTH 260
#define V_CHOICE 261
#define V_KEYWORD 262
#define V_REGEXP 263
#define V_FRACTION_DIGITS 264
#define V_SHOW 265
#define V_TREENAME 266
#define V_TRANSLATE 267
#define V_PREFERENCE 268
#define DOUBLEPARENT 269
#define DQ 270
#define DQP 271
#define PDQ 272
#define SETS 273
#define NAME 274
#define NUMBER 275
#define DECIMAL 276
#define CHARS 277
#define HELPSTR 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

  int intval;
  char *string;
  void *stack;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cligen_parselval;

int cligen_parseparse (void *_cy);

#endif /* !YY_CLIGEN_PARSE_CLIGEN_PARSE_TAB_H_INCLUDED  */
