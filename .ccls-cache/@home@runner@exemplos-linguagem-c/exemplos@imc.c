// imc.c - informa se uma pessoa está obesa ou não


#include <stdio.h>
// #include <conio.h>
#include <math.h>
#include <locale.h>
#define LIMITE 30



int main() {

  setlocale(LC_ALL, "Portuguese");

  float peso, altura, imc;
  
  //clrscr();
  
  printf("\nQual o seu peso? ");
  scanf("%f", &peso);
  printf("\nQual a sua altura? ");
  scanf("%f", &altura);
    
  imc = peso/(altura * altura);
    
  printf("\nSeu i.m.c. é %.1f", imc);
    
  if(imc <= LIMITE) printf("\nVocê não está obeso!");
  else printf("\nVocê está obeso!");
    
  
  //getch();

  return 0;
}