#include <stdio.h>
#include <locale.h>
/*4. Fa�a uma fun��o, sem retorno, que recebe a idade do usu�rio por par�metro, verifica
e informa se ele � maior de idade ou n�o.*/

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
	confere < 18 ? printf("� menor de idade!") : printf("� maior de idade");
	
	
}
