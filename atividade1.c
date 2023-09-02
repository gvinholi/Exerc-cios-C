#include <stdio.h>

int main(void) {
  char nome[100];
  float salario, novoSalario, diferenca, aumento, inss;
  

  printf("Digite o nome do funcinário: ");
  scanf("%s", &nome);
  printf("Digite o salário do funcionário: R$");
  scanf("%f", &salario);

  novoSalario = salario * 1.10;
  aumento = salario * 0.10;

  if(novoSalario <= 1100){
    
    inss = novoSalario * 0.08;
    
  }else if(novoSalario >= 1101 && novoSalario <= 1890){

    inss = novoSalario * 0.11;
    
  }else if(novoSalario >= 1891 && novoSalario <= 4200){

    inss = novoSalario * 0.18;
    
  }else{

    inss = novoSalario * 0.19;
  }
  

  printf("\nO funcionário %s com salário R$%.2f passa a receber R$%.2f, tendo um aumento de R$%.2f", nome, salario, novoSalario, aumento);
  printf("\n\nO desconto do INSS foi de R$%.2f", inss);



  return 0;
}
