#include <stdio.h>
#include <locale.h>

int result_fatorial(int num);

int main(){
	setlocale(LC_ALL,"portuguese");
	int n;
	
	printf("Digite um número: ");
	scanf("%d",&n);
	
		if(n < 0){
			printf("Não há fatorial para números negativos.");
		}else{
			printf("A fatorial de %d é: !%d",n,result_fatorial(n));
		}
	
	return(0);
}
	
int result_fatorial(int num){
	int fat = 1,i;
		for(i = 1;i <= num; i++){
			fat = fat * i;
		}
		
	return fat;
}
	


