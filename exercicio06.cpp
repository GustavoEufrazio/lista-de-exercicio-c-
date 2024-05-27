#include <stdio.h>
#include <stdlib.h>

void gerarTabuada(int num){
	for(int i=1; i<=10;i++){
		printf("\n%d * %d = %d", i,num,num*i);
	}
}

int main(void){
	int n;
	printf("Informe um número: ");
	scanf("%d", &n);
	
	gerarTabuada(n);
	return 0;	
}
