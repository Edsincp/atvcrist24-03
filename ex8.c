#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("bissexto\n");
    } else {
        printf("nao bissexto\n");
    }

    return 0;
}
