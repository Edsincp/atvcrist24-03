#include <stdio.h>

int main() {
    int nivel_satisfacao, tempo_residencia;
    int total_pessoas = 0, soma_satisfacao = 0, soma_tempo_residencia = 0;
    int count_insatisfeitos = 0, count_residencia_acima_10_anos = 0;

    printf("Digite o nível de satisfação (-1 para encerrar) e o tempo de residência na cidade:\n");

    do {
        printf("Nível de satisfação (-1 para encerrar): ");
        scanf("%d", &nivel_satisfacao);

        if (nivel_satisfacao != -1) {
            total_pessoas++;
            soma_satisfacao += nivel_satisfacao;

            if (nivel_satisfacao < 3) {
                count_insatisfeitos++;
            }

            printf("Tempo de residência na cidade (anos): ");
            scanf("%d", &tempo_residencia);

            soma_tempo_residencia += tempo_residencia;

            if (tempo_residencia > 10) {
                count_residencia_acima_10_anos++;
            }
        }
    } while (nivel_satisfacao != -1);

    if (total_pessoas > 0) {
        float media_satisfacao = (float)soma_satisfacao / total_pessoas;
        float media_tempo_residencia = (float)soma_tempo_residencia / total_pessoas;
        float percentual_insatisfeitos = (float)count_insatisfeitos / total_pessoas * 100;
        float percentual_residencia_acima_10_anos = (float)count_residencia_acima_10_anos / total_pessoas * 100;

        printf("\nResultados:\n");
        printf("a) Média do nível de satisfação da população: %.2f\n", media_satisfacao);
        printf("b) Tempo de residência médio na cidade: %.2f anos\n", media_tempo_residencia);
        printf("c) Percentual de pessoas insatisfeitas: %.2f%%\n", percentual_insatisfeitos);
        printf("d) Percentual de pessoas que residem na cidade há mais de 10 anos: %.2f%%\n", percentual_residencia_acima_10_anos);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
