#include <stdio.h>
#include <stdlib.h>
int main(void){
	int vet[10];
	int numReferencia;
	for(int i=0;i<10;i++){
		printf("\nDigite o %d � n�mero:", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nInforme o n�mero de refer�ncia: ");
	scanf("%d", &numReferencia);
	int maior=0, repete=0;
	
	for(int i=0;i<10;i++){
		if(vet[i] == numReferencia){
			repete++;
		}
		else if(vet[i] > numReferencia){
			maior++;
		}
	}
	
	printf("\nQuantidade de vezes que o vetor foi maior que o n�mero de refer�ncia: %d", maior);
	printf("\nQuantidade de vezes que se repete no vetor: %d", repete);
	
	return 0;
}
