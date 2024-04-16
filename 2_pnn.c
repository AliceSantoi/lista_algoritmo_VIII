#include <stdio.h>
#include <locale.h>

/*2. Crie uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e informa
se ele � positivo, negativo ou neutro*/

void pnn(int n);

int main(){
	//setlocale(LC_ALL,"pt-BR");
	setlocale(LC_ALL,"pt-br");

	int num;
	printf("Insira o n�mero: ");
	scanf("%d",&num);
	
	pnn(num);
	
	
	
	
	return(0);
}

void pnn(int n){
	n > 0 ? printf("%d � positivo!",n) : n < 0 ? printf("%d � negativo!",n) : printf("%d � nulo!",n);
}
