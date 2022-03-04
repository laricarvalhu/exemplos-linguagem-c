/* PERIM.C - informa o perímetro de uma circunferência */

#include <stdio.h>
#define PI 3.1415

int main() {
  
  float raio, perimetro;
  printf("\nQual a medida do raio?"); 
  scanf("%f", &raio);
  
  perimetro = 2 * PI * raio;
   
  printf("\nO perímetro é %.2f", perimetro);
  
  return 0;
}