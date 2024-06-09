//LGRM61 - Estrutura de alunos
//Luana Gabrielle Rodrigues Macedo - 16/05/2024
/*Solicitar os seguintes dados de um aluno:
	nome, telefone e idade

	Criar uma estrutura contendo esses tipos
 	A estrutura comporta 4 pessoas
	Criar uma função que apresente os dados das 4 pessoas
	Reciclar o programa saindo quando for digitado apenas Enter
*/

#include <stdio.h>
#include <iostream>
void fGrupo(struct stamigo am[4]);
void fclear();

struct stamigo {
	char nome[40];
	char telefone[12];
	int idade;
};
int main(){
	
	
struct stamigo amigos[4];
	for(int i = 0; i < 4; i++){
		printf("\nNome %d: ", i+1);
		gets(amigos[i].nome);
		printf("\nTelefone %d: ", i+1);
		gets(amigos[i].telefone);
		printf("\nIdade %d: ", i+1);
		scanf("%d", &amigos[i].idade);
		
		fclear();
}
	
fGrupo(amigos);
return 0;
	
} 

void fGrupo(stamigo amigos[4]){
	system("cls");
	printf("\nGrupo dos 4 amigos\n");
	printf("---------------------------------------------\n");
	for(int i = 0; i < 4; i++){
		printf("%s\n", amigos[i].nome);
		printf("cel: %s\t\t", amigos[i].telefone);
		printf("%d anos\n\n", amigos[i].idade);
	}
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}
}
