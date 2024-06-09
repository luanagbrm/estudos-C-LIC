//LGRM63 - Estrutura de alunos
//Luana Gabrielle Rodrigues Macedo - 16/05/2024
/*Solicitar os seguintes dados de um aluno:
	nome, sexo, idade e media final

	Criar uma estrutura contendo esses tipos
	Criar uma função que recebe e apresenta esses 4 dados
	Reciclar o programa saindo quando for digitado apenas Enter
*/

#include <stdio.h>
#include <iostream>
void funcAluno(char n[40], char s, int i, char en[40], char munic[20], char cep[9], float md);
void fclear();

int main(){
	
struct stender {
		char ender[40];
		char munic[20];
		char cep[9];
};
	
struct staluno {
		char nome[40];
		char sexo;
		int idade;
		struct stender ender;
		float media;
};	
	
	int i;
	
struct staluno aluno;
	do {
		
		printf("\n Nome (Enter para sair): ");
		gets(aluno.nome);
		
		if(aluno.nome[0] == '\0')
			break;
			
		printf("\n Sexo: ");
		scanf("%c", &aluno.sexo);
		printf("\n Idade: ");
		scanf("%d", &aluno.idade);
		printf("\n Media: ");
		scanf("%f", &aluno.media);	
		fclear();
		
		printf("Endereco: ");
		gets(aluno.ender.ender);
		printf("Municipio: ");
		gets(aluno.ender.munic);
		printf("CEP: ");
		gets(aluno.ender.cep);
		
		funcAluno(aluno.nome, aluno.sexo, aluno.idade, aluno.ender.ender, aluno.ender.munic, aluno.ender.cep, aluno.media);
         
	} while(1);
	
	return 0;	
} 
void funcAluno(char n[40], char s, int i, char en[40], char munic[20], char cep[9], float md){
	printf("---------------------------------------------\n");
	printf("%s\n", n);
	printf("Sexo: %c\n", s);
	printf("Idade: %d\n", i);
	printf("Endereco: %s\n", en);
	printf("Municipio: %s\n", munic);
	printf("CEP: %s\n", cep);
	printf("Media: %.2f\n", md);
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}
}