#include <stdio.h>

int main() {
    int linhas, numero = 1, espacos, i, j;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);

    espacos = linhas - 1;

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <= espacos; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
        espacos--;
    }

    return 0;
}
