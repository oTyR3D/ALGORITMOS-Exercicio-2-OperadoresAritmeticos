#include <stdio.h>
#include <math.h>

int main(){
int NUMERO1=0;
int NUMERO2=0;

int soma=0;
float div=0;
int sub=0;
int mult=0;


printf("\nQual o PRIMEIRO numero:\n");
scanf("%d",&NUMERO1);
printf("\nQual o SEGUNDO numero:\n");
scanf("%d",&NUMERO2);

soma=NUMERO1+NUMERO2;
sub=NUMERO1-NUMERO2;
mult=NUMERO1*NUMERO2;
div=(float)NUMERO1/(float)NUMERO2;


printf("\n___Resultados:___\n");
printf("%d + %d = %d\n", NUMERO1, NUMERO2, soma);
printf("%d - %d = %d\n", NUMERO1, NUMERO2, sub);
printf("%d * %d = %d\n", NUMERO1, NUMERO2, mult);
printf("%d / %d = %.2f\n", NUMERO1, NUMERO2, div);
return 0;
}
