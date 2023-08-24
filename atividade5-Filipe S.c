#include <stdio.h>
#include <math.h>

int main(){
float frete,custo,despesas,total,venda,final;

printf("Informe o custo da mercadoria:\n");
scanf("%f",&custo);
printf("Informe o custo do frete:\n");
scanf("%f",&frete);
printf("Informe o custo de eventuais despesas:\n");
scanf("%f",&despesas);
printf("Informe o valor de venda do produto:\n");
scanf("%f",&venda);

//calculos
total=frete+custo+despesas;
final=(venda/total)*100;//calculo para ver se teve lucro alem de cobrir os custo

//if para ver se houve lucro ou prejuizo
//calculo do final
printf("O lucro BRUTO foi de %.2f%%\n",final);
final=(venda/total)*100-100;
printf("O lucro LIQUIDO foi de %.2f%%\n",final);

}