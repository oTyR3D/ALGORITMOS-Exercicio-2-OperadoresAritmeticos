#include <stdio.h>
#include <math.h>

int main(){
float altura,largura,resultado;

printf("Informe a medida em metros da altura da sala\n");
scanf("%f",&altura);

printf("Informe a medida em metros da largura da sala\n");
scanf("%f",&largura);

resultado=altura*largura;
printf("O resultado e: %.2f metros",resultado);
}