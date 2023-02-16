#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Identificar qual triângulo é formado.
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
	
	int a, b, c;
	
    printf("\nInforme a medida dos lados: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a + b > c && b + c > a && c + a > b) { // Condição de existência: qualquer lado é menor que a soma dos outros dois
    	if (a != b && b != c && c != a) { 
	    	printf("\nTriângulo escaleno.");
		} else if (a == b && b == c) {
			printf("\nTriângulo equilátero.");
		} else {
			printf("\nTriângulo isósceles.");
		}
	} else {
		printf("\nNão é um triângulo.");
	}
    
	return(0);
}