#include <stdio.h>

int main() {
    char palavra[20];
    int n, i, qtde;

	printf("Digite uma frase: ");
	scanf("%s", palavra);
	
	for (i = 0; palavra[i] != '\0'; i++) {
		if (palavra != "\0") {
			qtde++;
		}
	} 		
	qtde = qtde - 1;
	
	printf("Qual a \"distancia\" das letras a serem criptografadas? ");
	scanf("%d", n);
	
	for (i = 0; i != qtde; i++) {
		printf("%s %d", palavra[i], n);
	};

    return 0;
}
