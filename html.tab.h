/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_HTML_TAB_H_INCLUDED
# define YY_YY_HTML_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
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
    tINT = 258,                    /* tINT  */
    tNB = 259,                     /* tNB  */
    tID = 260,                     /* tID  */
    tIF = 261,                     /* tIF  */
    tWHILE = 262,                  /* tWHILE  */
    tELSE = 263,                   /* tELSE  */
    tADD = 264,                    /* tADD  */
    tSUB = 265,                    /* tSUB  */
    tEQ = 266,                     /* tEQ  */
    tLBRACE = 267,                 /* tLBRACE  */
    tRBRACE = 268,                 /* tRBRACE  */
    tLPAR = 269,                   /* tLPAR  */
    tRPAR = 270,                   /* tRPAR  */
    tSEMI = 271,                   /* tSEMI  */
    tPRINT = 272,                  /* tPRINT  */
    tRETURN = 273,                 /* tRETURN  */
    tVOID = 274,                   /* tVOID  */
    tMUL = 275,                    /* tMUL  */
    tDIV = 276,                    /* tDIV  */
    tLT = 277,                     /* tLT  */
    tGT = 278,                     /* tGT  */
    tNE = 279,                     /* tNE  */
    tGE = 280,                     /* tGE  */
    tLE = 281,                     /* tLE  */
    tASSIGN = 282,                 /* tASSIGN  */
    tAND = 283,                    /* tAND  */
    tOR = 284,                     /* tOR  */
    tNOT = 285,                    /* tNOT  */
    tCOMMA = 286,                  /* tCOMMA  */
    tERROR = 287                   /* tERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "html.y"
 char *s; 

#line 99 "html.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);

/* "%code provides" blocks.  */
#line 7 "html.y"

  int yylex (void);
  void yyerror (const char *);

#line 119 "html.tab.h"

#endif /* !YY_YY_HTML_TAB_H_INCLUDED  */
