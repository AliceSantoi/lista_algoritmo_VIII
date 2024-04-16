#include <stdio.h>
#include <locale.h>

float converte(float c);

int main(){
	float c;
	
	printf("Insira os graus em celsius: ");
	scanf("%f",&c);
	
	printf("Valor convertido: %.1f",converte(c));
	
	return(0);
}

float converte(float f){
	return (1.8 * f )+ 32;
	
}
