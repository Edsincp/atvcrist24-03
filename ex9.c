#include <stdio.h>

int main() {
    int base, expoente;
    long long resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    printf("O resultado de %d elevado a %d é %lld\n", base, expoente, resultado);

    return 0;
}
