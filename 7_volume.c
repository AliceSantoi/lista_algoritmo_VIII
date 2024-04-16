#include <stdio.h>
#include <locale.h>
/*7. Faça uma função, com retorno, para calcular o valor do volume de uma caixa
retangular, utilizando a seguinte fórmula: */

float fun_volume(float c,float l,float a);

int main(){
	setlocale(LC_ALL,"portuguese");
	float comp,larg,altu,volume;
	
	printf("Digite, respectivamente, o valor do comprimento,largura e altura: ");
	scanf("%f%f%f",&comp,&larg,&altu);
	
	volume = fun_volume(comp,larg,altu);
	
	printf("Esse é o volume: %.1f",volume);
	
	
	return(0);
}

float fun_volume(float c,float l, float a){
	return c * l * a;
}
