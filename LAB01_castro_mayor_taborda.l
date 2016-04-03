%{
  #include "Tokens.h"
%}

%%

";"                                   return PUNTO_Y_COMA;
"void"                                return VOID;
"("                                   return PARENT_A;
")"                                   return PARENT_C;
"{"                                   return INICIO;
"}"                                   return FIN;
"scanf"                               return LEER;
"printf"                              return ESCRIBIR;
"main"                                return MAIN;
","                                   return COMA;

"+"                                   return SUMA;
"-"                                   return RESTA;
"*"                                   return MULTIPLICACION;
"/"                                   return DIVISION;
"^"                                   return EXP;

"int"                                 return TIPO_INT;
"float"                               return TIPO_FLOAT;
"char"                                return TIPO_CHAR;

"<="                                  return MENOR_IGUAL;
">="                                  return MAYOR_IGUAL;
"<"                                   return MENOR;
">"                                   return MAYOR;
"<>"                                  return DIFERENTE;
"="                                   return IGUAL;
"=="                                  return IGUAL_IGUAL;

"&&"                                  return OP_Y;
"||"                                  return OP_O;
"~"                                   return OP_NO;

"if"                                  return SI;
"else"                                return SINO;
"else if"                             return SINO_SI;
"for"                                 return PARA;
"while"                               return MIENTRAS_QUE;
"do"                                  return HAGA_HASTA;
"switch"                              return DEPENDIENDO_DE;
"case "[a-zA-Z0-9]+:                  return CASO;

[a-zA-Z][a-zA-Z0-9]*                  return ID;
[0-9][0-9]*                           return CTE_ENTERO;
[0-9]+(.[0-9]+)?(e(\+|-)?[0-9]+)?     return CTE_REAL;
\"(\\.|[^"])*\"                       return CTE_CADENA;

%%

int yywrap(void){
  return 1;
}
