#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159

/*6. Elabore uma função, com retorno, que calcula a área de uma circunferência. Para
isto, utilize a seguinte fórmula:  A=PI*r^2*/

float area(float raio);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float r,a;
	
	printf("Insira o valor do raio para calcular a área: ");
	scanf("%f",&r);
	
	a = area(r);
	
	printf("Valor da área: %.1f",a);
	
	return(0);
}

float area(float raio){
	return pi * pow(raio,2);
	
}
