#include <stdio.h>
#include <math.h>

int main(){
float quant,dolar,resultado;

printf("Informe a cotacao do dolar:\n");
scanf("%f",&dolar);
printf("Informe quantos reais deseja converter: \n");
scanf("%f",&quant);

resultado=quant/dolar;

printf("O resultado e: %.2f dolares",resultado);
}