#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n = 10, num, divisivel=0;
	
	for(int i=0;i<10;i++){
		printf("Digite o %d º número:", i);
		scanf("%d", &num);
		
		if(num % 3 ==0 && num % 5 ==0){
			divisivel++;
		}
	}
	
	printf("Dentre os números pedidos, a quantidade números que são \nDivisíveis por 3 e 5 é igual a: %d", divisivel);
	return 0;
}
