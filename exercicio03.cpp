#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	
	printf("Informe o tamanho de pessoas a serem entrevistadas: ");
	scanf("%d", &n);
	
	int vet[n];
	int jovem=0, adulto=0, idoso=0;
	for(int i =0; i<n; i++){
		printf("Informe a idade da %d º pessoas : ", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i] >= 18 && vet[i]< 35){
			jovem++;
		}else if(vet[i] >= 35 && vet[i] < 65){
			adulto++;
		}
		else if(vet[i] >= 65){
			idoso++;
		}
	}
	
	printf("Quantidade de jovens: %d", jovem);
	printf("\nQuantidade de adultos: %d", adulto);
	printf("\nQuantidade de idosos: %d", idoso);
		
	return 0;
}
