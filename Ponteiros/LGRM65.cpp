//LGRM64 - funções: passagens de paramêtros
//Luana Gabrielle Rodrigues Macedo - 23/05/24
//Testas as 2 formas de passar parametros para as funções:
//por valor e por referencia[

#include <stdio.h>

void fValor(float *pval, float tx); // por valor

//PONTEIROS: int *p; define um ponteiro (variavel que contem um endereço de memoria)

int main(void){
	float val, taxa;
	
	do{
		printf("Digite um valor monetario (0 para sair): ");
		scanf("%f", &val);
		
		if(val == 0)
			break;
		
		printf("\nDigite uma taxa percentual: ");
		scanf("%f", &taxa);
		
			
		fValor(&val, taxa);
		printf("Resultado: R$%.3f\n\n", val);
		
	} while(val != 0);
	
	
	return 0;
}

void fValor(float *pval, float tx){  //nao mudou o valor da variavel A e B
	*pval = *pval + (*pval *(tx/100));
	
}
