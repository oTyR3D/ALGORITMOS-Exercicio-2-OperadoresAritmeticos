#include <stdio.h>
#include <math.h>

int main(){
float salario,reajuste,resultado;

printf("Informe o salario:\n");
scanf("%f",&salario);

printf("Informe o percentual do reajuste:\n");
scanf("%f",&reajuste);
resultado=salario+salario*(reajuste/100);
  printf("O salario pos reajuste sera de %.2f reais",resultado);
}