%{
#include <stdio.h>
#include <stdlib.h>
#include "html.tab.h"
%}

%code provides {
  int yylex (void);
  void yyerror (const char *);
}
%union { char *s; }

%token tINT tNB tID tIF tWHILE tELSE tADD tSUB tEQ tLBRACE tRBRACE tLPAR tRPAR  tSEMI tPRINT tRETURN tVOID tMUL tDIV tLT tGT tNE tGE tLE tASSIGN tAND tOR tNOT tCOMMA tERROR


%left tSUB tADD
%left tMUL tDIV    
%left tEQ tLT tGT tNE tGE tLE
%left tCOMMA

%%

program: 
       | program fonc_declaration
       ;


fonc_declaration: {printf("déclaration fonction int\n");} tINT tID tLPAR params tRPAR tLBRACE instructions  return_statement tRBRACE 
                | {printf("déclaration fonction VOID\n");} tVOID tID tLPAR params tRPAR tLBRACE instructions tRBRACE 
                ;

return_statement: {printf("return ");}tRETURN expression tSEMI
print_statement: tPRINT expression tSEMI 

if_statement: tIF tLPAR expression tRPAR tLBRACE instructions tRBRACE 
            | tIF tLPAR expression tRPAR tLBRACE instructions tRBRACE tELSE tLBRACE instructions tRBRACE
            ;

while_statement: tWHILE tLPAR expression tRPAR tLBRACE instructions tRBRACE
               ;

print_statement: tPRINT tLPAR tID tRPAR tSEMI 
               ;

int_declaration: {printf("déclaration int ");} tINT int_declaration 
                | expression tASSIGN int_declaration {printf(" == ");}
                | expression tSEMI {printf(";\n");}
                ;


instructions: if_statement {printf("if\n");}
                | while_statement {printf("while\n");}
                | print_statement {printf("print\n");}
                | int_declaration {printf("int\n");}
                | if_statement instructions {printf("if\n");}
                | while_statement instructions {printf("while\n");}
                | print_statement instructions {printf("print\n");}
                | int_declaration instructions {printf("int\n");}
                ;  
params: tVOID
      | tINT tID tCOMMA {printf("COMMA\n");} params
      | tVOID tID tCOMMA {printf("COMMA");} params
      | tINT tID 
      | tVOID tID
      ;
    
expression: expression tADD {printf(" ADD ");} expression
          | expression tSUB {printf(" SUB ");} expression
          | expression tMUL {printf(" MUL ");} expression
          | expression tDIV {printf(" DIV ");} expression
          | expression tEQ {printf(" = ");} expression
          | expression tCOMMA {printf(" COMA ");} expression
          | expression tLE {printf(" <= ");} expression
          | expression tGE {printf(" ADD ");} expression
          | expression tNE {printf(" ADD ");} expression
          | expression tLT {printf(" < ");} expression
          | expression tGT {printf(" > ");} expression
          | tID tLPAR expression tRPAR
          | tID {printf("Id ");}
          | tNB {printf("Number \n");}
          ;

%%

void yyerror(const char *msg) {
  fprintf(stderr, "error: %s\n", msg);
  exit(1);
}
int main(){
  yyparse();
}