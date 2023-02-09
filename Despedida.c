#include <stdio.h>
struct {
  int edad;
  float altura;
  char genero;
}ranqui;

int main() {
  int edad_mental_ranqui_enSiglos = 2;
  double hectometros_nepe_ranqui = 0.1;

  ranqui.edad = 19;
  ranqui.altura = 1.75;
  ranqui.genero =  'f';

  printf("edad : %d , altura : %f , genero : %c", ranqui.edad, ranqui.altura, ranqui.genero);
  
    printf( "\n   Oigan si quieren que me vaya me lo decís...." );
  printf( "\n   Esto definitivamente es una despedida, adiós." );
  printf("HOlaaaaaa ");
  printf("SI OS SALE ESTO AVISAME SOY ALONSO");
  printf("\n\tLa edad mental de ranqui es : %d years", edad_mental_ranqui_enSiglos);
  printf("\n\tA ranqui le mide: %f years", hectometros_nepe_ranqui);
  printf("Oigan esto no es gracioso eh");
  printf("Callese vegestorio senil, que le mide 0.1 hectometros");
  return 0;
}
