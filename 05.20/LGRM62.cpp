//LGRM60 - Estrutura de alunos
//Luana Gabrielle Rodrigues Macedo - 16/05/2024
/*Solicitar os seguintes dados de um aluno:
	nome, sexo, idade e media final

	Criar uma estrutura contendo esses tipos
	Criar uma função que recebe e apresenta esses 4 dados
	Reciclar o programa saindo quando for digitado apenas Enter
*/

#include <stdio.h>
#include <iostream>
void fGrupo(struct stamigo am[50], int i);
void fclear();

struct stamigo {
		char nome[40];
		char telefone[12];
		int idade;
	};

int main(){
	
	int i;
	
struct stamigo amigos[50];
	do {
		
			printf("\nNome %d (ENTER para sair): ", i+1);
			gets(amigos[i].nome);
			if(amigos[i].nome[0] == '\0')
				break;
			printf("\nTelefone %d: ", i+1);
			gets(amigos[i].telefone);
			printf("\nIdade %d: ", i+1);
			scanf("%d", &amigos[i].idade);
			i++;
			
			fclear();
	
	} while(i < 50);
	
	fGrupo(amigos, i);
	

	return 0;	
} 
void fGrupo(stamigo amigos[50], int i){
	
	system("cls");
	printf("\nGrupo dos %d amigos\n", i);
	printf("---------------------------------------------\n");
	for(int j = 0; j < i; j++){
		printf("%s\n", amigos[j].nome);
		printf("cel: %s\t\t", amigos[j].telefone);
		printf("%d anos\n\n", amigos[j].idade);
	}
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}
}