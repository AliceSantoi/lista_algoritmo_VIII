#include <stdio.h>
#include <locale.h>

void multiplo(int m);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	printf("Insira o número: ");
	scanf("%i",&num);
	
	multiplo(num);
	
	return(0);
}

void multiplo(int m){
	m % 5 == 0 ? printf("%d é múltiplo de 5. ",m) : printf("%d não é múltiplo de 5. ",m); 
}
	
	
	
	
	
