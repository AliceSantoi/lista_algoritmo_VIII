#include <stdio.h>
#include <locale.h>
/*4. Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
e informa se ele é maior de idade ou não.*/

void maior_menor(int confere);

int main(){
	int idade;
	setlocale(LC_ALL,"portuguese");w
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	maior_menor(idade);
	
	return(0);
}

void maior_menor(int confere){
	confere < 18 ? printf("é menor de idade!") : printf("é maior de idade");
	
	
}
