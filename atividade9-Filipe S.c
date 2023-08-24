#include <stdio.h>
#include <math.h>

int main(){
float custo,imposto=0.45,porcentagem=0.28,valor;

printf("Informe o do custo de fabrica do automovel:\n");
scanf("%f",&custo);
valor=(custo+custo*imposto);
printf("O valor apos imposto sera de: R$%.2f\n",valor);
valor=(valor+valor*porcentagem);
printf("O valor final de venda sera de: R$%.2f\n",valor);

}