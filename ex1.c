#include <stdio.h>

int main() {
    int idade, total_idade = 0, count_idade = 0;
    float altura, total_altura = 0.0, count_altura = 0.0;
    int maior_idade = 0;
    float percentual_acima_180 = 0.0;

    printf("Digite a idade e altura das pessoas (idade negativa para encerrar):\n");

    do {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade >= 0) {
            total_idade += idade;
            count_idade++;

            if (idade > maior_idade) {
                maior_idade = idade;
            }

            printf("Altura: ");
            scanf("%f", &altura);

            total_altura += altura;
            count_altura++;

            if (altura > 1.80) {
                percentual_acima_180++;
            }
        }
    } while (idade >= 0);

    if (count_idade > 0) {
        float media_idade = (float)total_idade / count_idade;
        float media_altura = total_altura / count_altura;
        percentual_acima_180 = (percentual_acima_180 / count_altura) * 100;

        printf("\nResultados:\n");
        printf("a) Média da idade da população: %.2f\n", media_idade);
        printf("b) Média da altura da população: %.2f\n", media_altura);
        printf("c) Maior idade registrada: %d\n", maior_idade);
        printf("d) Percentual de pessoas com altura acima de 1,80 metros: %.2f%%\n", percentual_acima_180);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}

