#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n = 10, num, divisivel=0;
	
	for(int i=0;i<10;i++){
		printf("Digite o %d � n�mero:", i);
		scanf("%d", &num);
		
		if(num % 3 ==0 && num % 5 ==0){
			divisivel++;
		}
	}
	
	printf("Dentre os n�meros pedidos, a quantidade n�meros que s�o \nDivis�veis por 3 e 5 � igual a: %d", divisivel);
	return 0;
}
