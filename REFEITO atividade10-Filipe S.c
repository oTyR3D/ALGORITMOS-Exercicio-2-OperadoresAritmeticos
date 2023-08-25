#include <stdio.h>
#include <math.h>

int main(){
float salario,comissao,carros,bonus=0.05,vendas,total;
//INT CARROS


printf("Qual o valor do salario fixo?\n");
scanf("%f",&salario);

printf("Quantos carros foram vendidos?:\n");
scanf("%f",&carros);

printf("Qual o valor da comissao por carro vendido?\n");
scanf("%f",&comissao);

printf("Qual o valor total de vendas que foram efetuadas?\n");
scanf("%f",&vendas);

//calculos
total=salario+(carros*comissao)+(vendas*bonus);
printf("Total a ser recebido e de R$%.2f\n",total);
}