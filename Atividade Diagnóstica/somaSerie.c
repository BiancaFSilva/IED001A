#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  Somar quantidade de termos de uma série
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
	
	int i, t, s = 0, n = 1;
	
	printf("Informe o número de termos: ");
	scanf("%d", &t);
		
	printf("\n");
	for (i = 1; i <= t; i++) {	
		if (i <= (t - 1)) {
			printf("%d + ", n);	// Exibe sinal de + enquanto não for o último termo	
		} else {
			printf("%d\n", n);	
		}
		
		s = s + n;			// Soma os números acumulados
		n = (n * 10) + 1;	// Adiciona 1 ao final (ex: 11 -> 111)
	};
	
	printf("\nA soma dos termos é %d", s);

	return(0);
}