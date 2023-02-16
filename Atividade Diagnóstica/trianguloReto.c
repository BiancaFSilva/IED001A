#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  Formar um triângulo de ângulo reto com números crescentes (Triângulo de Floyd). 
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
		
	int l, i, j;	// quantidade de linhas, índice da linha, delimitador da linha
	int n = 1;		// número que será exibido	
	
	printf("Informe o número de linhas: ");
	scanf("%d", &l);
		
	for (i = 1; i <= l; i++) {
		printf("\n");
		for (j = 1; j <= i; j++) {
			printf("%d\t", n);	// atalho tab apenas para melhorar a estética
			n++;	
		};		
	};

	return(0);
}