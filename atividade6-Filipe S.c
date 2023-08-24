#include <stdio.h>
#include <math.h>

int main(){
float raio,area;

printf("Informe o raio: \n");
scanf("%f",&raio);

area=pow(raio,2)*3.14;

printf("A area e de %f",area);
}