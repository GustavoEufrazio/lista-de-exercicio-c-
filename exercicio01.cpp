#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	int par=0, impar=0;
	for(int i =0; i<n; i++){
		printf("Informe o valor de posi��o %d : ", i);
		scanf("%d", &vet[i]);
		
		if(vet[i] % 2 ==0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("Quantidade de n�meros pares: %d", par);
	printf("\nQuantidade de n�meros �mpares: %d", impar);	
	return 0;
}
