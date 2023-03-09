#include <stdio.h>

int main () {
    int vet[4] = {10, 12, 30, 45};
    int *pvet;

    pvet = vet; // Ou pvet = &vet[0];

    for (int i = 0; i < 4; i++) {
        printf("%d \n", *pvet++);
    }; 

    return 0;
}