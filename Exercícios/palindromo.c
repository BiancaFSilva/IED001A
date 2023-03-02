#include <stdio.h>

int main()
{
    char palavra[100], codificado[100];
    int n, i;

	printf("Digite uma palavra: ");
	fgets(palavra, 100, stdin);
		
	for (i = 0; palavra[i] != '\0'; i++) {
		if (palavra[i] == ' ' || palavra[i] == '\n') {
			codificado[i] = palavra[i];
		} else {
			codificado[i] = palavra[i] + 3;
		}
	} 	
	codificado[i] = '\0';	

	printf("\nA frase codificada e: %s", codificado);
    return 0;
}
