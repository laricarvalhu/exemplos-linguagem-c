// imc.c - informa se uma pessoa está obesa ou não

#include <stdio.h>
#include <math.h>
#define LIMITE 30

int main() {
  
  float peso, altura, imc;
  
  printf("\nQual o seu peso? ");
  scanf("%f", &peso);
  printf("\nQual a sua altura? ");
  scanf("%f", &altura);
    
  imc = peso/(altura * altura);
    
  printf("\nSeu i.m.c. é %.1f", imc);
    
  if(imc <= LIMITE)
    printf("\nVocê não está obeso!");
  else 
    printf("\nVocê está obeso!");
    
  return 0;
  
}