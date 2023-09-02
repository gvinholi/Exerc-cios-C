#include <stdio.h>

int main(void) {
  float altura, nota;
  int peso;

  printf("Digite sua altura em metros: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%i", &peso);
  printf("Digite a nota da prova: ");
  scanf("%f", &nota);

  if(nota == 10){
    printf("QUALIFICADO!!!");
  }else if(altura > 1.70 && peso <= 80 && nota >= 9){
    printf("QUALIFICADO");
  }else{
    printf("DESQUALIFICADO");
  }
  return 0;
}
