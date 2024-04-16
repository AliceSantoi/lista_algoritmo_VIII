#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*3. Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e
informa se tal número é par ou ímpar.*/

void poui(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite o número: ");
	scanf("%d",&num);	
	poui(num);
	
	
	return(0);
}

void poui(int n){
	n % 2 == 0 ? printf("O número %d é par.",n) :  printf("O número %d é impar.",n);
	
	
}
