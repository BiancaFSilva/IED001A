#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, ""); // Permite acentua��o
	
	int m[3][3], l, c;
	int s[] = {0, 0, 0};
	
	printf("Insira os valores da primeira linha da matriz: \n\n");
	for (l = 0; l <= 2; l++) {	
		for (c = 0; c <= 2; c++) {	
			scanf("%d", &m[l][c]);
		};
	};
	
	printf("\nA matriz formada �: \n\n");
	for (l = 0; l <= 2; l++) {	
		for (c = 0; c <= 2; c++) {	
			printf("  %d ", m[l][c]);
		};
		printf("\n");
	};
	
	printf("\nSoma dos valores de cada coluna: \n");
	for (l = 0; l <= 2; l++) {	
		for (c = 0; c <= 2; c++) {	
			s[c] += m[l][c];
		};
	};
	
	for (c = 0; c <= 2; c++) {	
		printf("\n  %d� coluna: %d", (c + 1), s[c]);
	};
	
  	return(0);
}
