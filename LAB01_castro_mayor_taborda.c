#include <stdio.h>
#include "Tokens.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *nombres[] = {NULL, " Id= ", " Punto-coma= ", " VOID", " Parent-a= ", " Parent-c= ", 
                        " Inicio= ", "Fin= ", " Leer= ", " Escribir= ", "MAIN", 
                        " Coma= ", " Op-sum= ", " Op-sust= ", " Op-mult= ", 
                        " Op-div= ", " Op-exp= ", " Cte-entera= ", " Cte-real= ", 
                        " Cte-cadena= ", " INT", " FLOAT", " CHAR", " Menor-igual= ", 
                        " Mayor-igual= ", " Menor= ", " Mayor= ", " Difente= ", " Op-asign= ", 
                        " Comparacion= ", " Op-y= ", " Op-o= ", " Op-no= ", " Si= ", " Sino= ", 
                        "Sino-si= ", " Para= ", " Mientras-que= ", " Haga-hasta= ", " Dependiendo-de= ", 
                        " Caso= "};

int main(void){

  int ntoken;

  ntoken = yylex();

  FILE *archivo = fopen("salida.txt", "w");

  while(ntoken){
    printf("%s", nombres[ntoken]);
    fprintf(archivo, nombres[ntoken]);
    if(ntoken != 3 && ntoken != 10 && ntoken != 20 && ntoken != 21 && ntoken != 22){
      printf("%s", yytext);
      fprintf(archivo, yytext);
    }
    if(ntoken == 2 || ntoken == 6){
      fprintf(archivo, "\n");
    }
    ntoken = yylex();
  }
  printf("%s\n", "");
  fclose(archivo);
  return 0;
}