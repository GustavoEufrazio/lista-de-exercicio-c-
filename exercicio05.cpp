#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
	int matricula;
	char nome[50];
	float notaAV;
	float simulado1, simulado2;
}Aluno;

int main(void){
	
	int n;
	printf("Informe a quantidade de aluno a serem lidos: ");
	scanf("%d", &n);
	
	Aluno aluno[n];
	
	for(int i=0; i<n;i++){
		
		printf("\nInforme a matrícula do %d º aluno: ", i+1);
		scanf("%d", &aluno[i].matricula);
		
		printf("Informe o nome do %d º aluno: ", i+1);
		scanf("%s", &aluno[i].nome);
		
		printf("Informe a nota da AV do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].notaAV);
		
		printf("Informe a nota do simulado 1 do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].simulado1);
		
		printf("Informe a nota do simulado 2 do %d º aluno: ", i+1);
		scanf("%f", &aluno[i].simulado2);
					
	}
	
	for(int i=0; i<n;i++){
		printf("\n");
		printf("\nDados do aluno %d: \nMatrícula: %d \nNome: %s \nNota da Av: %2.f\nNota do simulado 1: %2.f\nNota do simulado 2: %2.f\n", i+1,aluno[i].matricula,aluno[i].nome,aluno[i].notaAV,aluno[i].simulado1,aluno[i].simulado2);
	}
	
	return 0;
}
