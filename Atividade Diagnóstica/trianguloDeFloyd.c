#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  Formar o triângulo de Floyd exibindo apenas 0 e 1.
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
		
	int l, i, j;	// quantidade de linhas, índice da linha, delimitador da linha
	int n;		// número que será exibido	
	
	printf("Informe o número de linhas: ");
	scanf("%d", &l);
		
	for (i = 1; i <= l; i++) {
		printf("\n");
		
		for (j = 1; j <= i; j++) {
			if (j % 2 == 0) {
				n = 0;
			} else {
				n = 1;
			}
			
			printf("%d\t", n);	// atalho tab apenas para melhorar a estética	
		};	
	};

	return(0);
}