#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Verificar se um determinado ano é bissexto. 
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite acentuação
	
	int ano;
	
    printf("\nDigite o ano: ");
    scanf("%d", &ano);
    
    // Um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100.
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
		printf("\n%d é um ano bissexto.", ano);
	} else {
		printf("\n%d não é um ano bissexto.", ano);
	}

	return(0);
}