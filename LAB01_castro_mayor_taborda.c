#include <stdio.h>
#include "LAB01_castro_mayor_taborda.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *nombres[] = {NULL, " Id= ", " Punto-coma= ", " VOID ", " Parent-a= ", " Parent-c= ", 
                        " Inicio= ", " Fin= ", " Leer= ", " Escribir= ", " MAIN ", 
                        " Coma= ", " Op-sum= ", " Op-sust= ", " Op-mult= ", 
                        " Op-div= ", " Op-exp= ", " Cte-entera= ", " Cte-real= ", 
                        " Cte-cadena= ", " INT ", " FLOAT ", " CHAR ", " Menor-igual= ", 
                        " Mayor-igual= ", " Menor= ", " Mayor= ", " Difente= ", " Op-asign= ", 
                        " Comparacion= ", " Op-y= ", " Op-o= ", " Op-no= ", " Si= ", " Sino= ", 
                        " Para= ", " Mientras-que= ", " Haga-hasta= ", " Dependiendo-de= ", 
                        " Caso= "};

int main(void){

  int ntoken, vtoken;

  ntoken = yylex();

  while(ntoken){
    printf("%s", nombres[ntoken]);
    printf("%s", yytext);
    ntoken = yylex();
  }

  return 0;
}

