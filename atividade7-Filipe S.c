#include <stdio.h>
#include <math.h>

int main(){
float dias,meses,anos,resultado;

printf("Informe a quantos anos voce possui:\n");
scanf("%f",&anos);

printf("Informe a quantos meses voce possui:\n");
scanf("%f",&meses);

printf("Informe a quantos voce dias possui:\n");
scanf("%f",&dias);

anos=anos*365;
meses=meses*30;

resultado=(dias+meses)+anos;
printf("Voce possui: %.2f dias de vida\n",resultado);
}