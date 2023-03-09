#include <stdio.h>

main () {
    char frase[] = "alohomora";
    char *p;
    int i, n = 0;

    for (p = frase; *p != '\0'; p++) {
        if (*p == 'a' || *p == 'o') {
            n++;
        }
    };
    printf("Quantidade de vogais: %d\n", n);

    for (i = 0, n = 0; frase[i] != '\0'; i++) {
        if (frase[i] != 'a' && frase[i] != 'o') {
            n++;
        }
    };
    printf("Quantidade de consoantes: %d\n", n);
}