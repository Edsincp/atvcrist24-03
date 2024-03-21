#include <stdio.h>

int main() {
    int numero, soma = 0;

    for (numero = 1; numero <= 100; numero++) {
        if (numero % 2 == 0) {
            soma += numero;
        }
    }

    printf("A soma dos numeros pares de 1 a 100 eh: %d\n", soma);

    return 0;
}

