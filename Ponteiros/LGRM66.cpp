//LGRM65 - funções: passagens de paramêtros
//Luana Gabrielle Rodrigues Macedo - 23/05/24
//Testas as 2 formas de passar parametros para as funções:
//por valor e por referencia[

#include <stdio.h>
void fValor(float *pval, float tx); // por valor

//PONTEIROS: int *p; define um ponteiro (variavel que contem um endereço de memoria)

#include <stdio.h>
void fMostra(int M[10][20]);
void fDobra(int M[10][20]);
void zeraNoves(int M[10][20]);

int main(void){
	int Mat[10][20];
	int i, j;
	int n = 1;
	

	for (i = 0; i < 10 ; i++)
		for (j = 0; j < 20; j++){
			Mat[i][j] = n;
			n++;
		}
		
	fMostra(Mat); // aqui estamos passando o endereço da matriz para a função
	fDobra(Mat);
	printf("\n");
	fMostra(Mat);
	printf("\n");
	zeraNoves(Mat);
	fMostra(Mat);
	
	return 0;	
} 

void fMostra(int M[10][20]){ 
	for (int i = 0; i < 10 ; i++){
		for (int j = 0; j < 20; j++)
			printf("%d\t", M[i][j]);
		printf("\n");
	}
}

void fDobra(int M[10][20]){
	for (int i = 0; i < 10 ; i++)
		for (int j = 0; j < 20; j++){
			M[i][j] = M[i][j]*2;
		}
}

void zeraNoves(int M[10][20]){
	for (int i = 0; i < 10 ; i++)
		for (int j = 0; j < 20; j++){
			if(M[i][j] % 9 == 0)
				M[i][j] = 0;
			M[i][j] = M[i][j];
		}
}