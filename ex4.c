#include <stdio.h>
#include <string.h>

#define MAX_PROFISSAO_LENGTH 50

struct Pessoa {
    char profissao[MAX_PROFISSAO_LENGTH];
    float renda_mensal;
};

int main() {
    struct Pessoa pessoa;
    float total_renda = 0.0;
    int count_pessoas = 0, count_desempregados = 0, count_acima_5000 = 0;
    float maior_media_renda = 0.0;
    char profissao_maior_media[MAX_PROFISSAO_LENGTH];

    printf("Digite a profissão e a renda mensal das pessoas (digite 'x' para encerrar):\n");

    do {
        printf("Profissão: ");
        scanf("%s", pessoa.profissao);

        if (strcmp(pessoa.profissao, "x") == 0 || strcmp(pessoa.profissao, "X") == 0) {
            break;
        }

        printf("Renda Mensal: ");
        scanf("%f", &pessoa.renda_mensal);

        total_renda += pessoa.renda_mensal;
        count_pessoas++;

        if (pessoa.renda_mensal > 5000.00) {
            count_acima_5000++;
        }

        if (pessoa.renda_mensal > maior_media_renda) {
            maior_media_renda = pessoa.renda_mensal;
            strcpy(profissao_maior_media, pessoa.profissao);
        }

        printf("Empregado? (S/N): ");
        char empregado;
        scanf(" %c", &empregado);
        if (empregado == 'N' || empregado == 'n') {
            count_desempregados++;
        }
    } while (strcmp(pessoa.profissao, "x") != 0 && strcmp(pessoa.profissao, "X") != 0);

    if (count_pessoas > 0) {
        float media_renda = total_renda / count_pessoas;
        float percen_desempregados = (float)count_desempregados / count_pessoas * 100;
        float percen_acima_5000 = (float)count_acima_5000 / count_pessoas * 100;

        printf("\nResultados:\n");
        printf("a) Média da renda mensal da população: R$ %.2f\n", media_renda);
        printf("b) Profissão com maior média de renda: %s\n", profissao_maior_media);
        printf("c) Percentual de pessoas desempregadas: %.2f%%\n", percen_desempregados);
        printf("d) Percentual de pessoas com renda acima de R$ 5000,00: %.2f%%\n", percen_acima_5000);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
