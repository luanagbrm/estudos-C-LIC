//LGRM64 - funções: passagens de paramêtros
//Luana Gabrielle Rodrigues Macedo - 23/05/24
//Testas as 2 formas de passar parametros para as funções:
//por valor e por referencia[

#include <stdio.h>

void funcDobra1val(int n1, int n2); // por valor
void funcDobra2ref(int *pn1, int *pn2); // por referencia

//PONTEIROS: int *p; define um ponteiro (variavel que contem um endereço de memoria)

int main(void){
	int A, B;
	
	printf("Digite um valor inteiro para A: ");
	scanf("%d", &A);
	
	printf("\nDigite um valor inteiro para B: ");
	scanf("%d", &B);
	
	funcDobra1val(A,B);
	printf("\nApos a funcDobra1val com passagem por valor, temos\n");
	printf("A = %d\t B = %d", A, B);
	
	funcDobra2ref(&A,&B);
	printf("\n\nApos a funcDobra2ref com passagem por referencia, temos\n");
	printf("A = %d\t B = %d", A, B);
	
	return 0;
} 

void funcDobra1val(int n1, int n2){  //nao mudou o valor da variavel A e B
	n1 = n1*2;
	n2 = n2*2;
}

void funcDobra2ref(int *pn1, int *pn2){ //mudou o valor da variavel A e B
	*pn1 = *pn1*2;
	*pn2 = *pn2*2;
	
	printf("\npn1 = %d\tpn2 = %d", pn1, pn2);
}
