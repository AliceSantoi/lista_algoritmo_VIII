#include <stdio.h>
#include <locale.h>
/*9. Crie uma fun��o, com retorno, que recebe tr�s notas por par�metro e calcula a
m�dia aritm�tica de um aluno. Crie outra fun��o, sem retorno, que recebe a m�dia
aritm�tica por par�metro e informar o conceito obtido pelo aluno, de acordo com a
tabela a seguir:*/

float calcula_media(float n1,float n2,float n3);
void result_conceito(float c);

int main(){
	setlocale(LC_ALL,"portuguese");
	float nu1,nu2,nu3,media,conceito;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nu1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nu2);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nu3);
	
	media = calcula_media(nu1,nu2,nu3);
	
	printf("Sua m�dia aritmetica: %.1f\n",media);
	result_conceito(media);

	return(0);
	
	
}
float calcula_media(float n1,float n2,float n3){
	return (n1 + n2 + n3)/3;
}

void result_conceito(float c){
	c >= 9 ? printf("Conceito A!") 
		: c >= 7 && c < 9 ? printf("Conceito B!") 
			: c >= 6 && c < 7 ? printf("Conceito C!") 
				: c >= 4 && c < 6 ? printf("Conceito D!") 
					: printf("Conceito E!");  
}
