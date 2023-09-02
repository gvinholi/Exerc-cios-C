#include <stdio.h>

int main(void) {
  int peso;
  float altura, resultado;

  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%i", &peso);

  resultado = peso / (altura * altura); 
  
  printf("%f", resultado);
  
  if(resultado < 20){
    printf("ABAIXO DO PESO!!!");
  }else if(resultado >= 20 && resultado < 25){
    printf("PESO IDEAL!!!");
  }else{
    printf("\nACIMA DO PESO!!!");
  }

  
  return 0;
}
