#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*3. Fa�a uma fun��o, sem retorno, que recebe um valor inteiro por par�metro, verifica e
informa se tal n�mero � par ou �mpar.*/

void poui(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite o n�mero: ");
	scanf("%d",&num);	
	poui(num);
	
	
	return(0);
}

void poui(int n){
	n % 2 == 0 ? printf("O n�mero %d � par.",n) :  printf("O n�mero %d � impar.",n);
	
	
}
