#include <stdio.h>

int main () {
	int m[3][3], l, c;
	int s[] = {0, 0, 0};
	
	printf("Insira os valores da primeira linha da matriz: \n\n");
	for (l = 0; l <= 2; l++) {	
		for (c = 0; c <= 2; c++) {	
			scanf("%d", &m[l][c]);
		};
	};
	
	printf("\nA matriz formada e: \n\n");
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
		printf("\n  Coluna 0%d: %d", (c + 1), s[c]);
	};
	
  	return(0);
}
