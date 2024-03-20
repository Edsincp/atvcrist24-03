#include <stdio.h>

int main() {
    int cor_da_pele, grau_escolaridade;
    int total_pessoas = 0, cor_a = 0, cor_b = 0, cor_c = 0;
    int ensino_superior_completo = 0, ensino_medio_incompleto = 0;

    printf("Digite a cor da pele (1 - A, 2 - B, 3 - C) e o grau de escolaridade (1 - Ensino Superior Completo, 2 - Ensino Médio Incompleto): \n");

    do {
        printf("Cor da pele (-1 para encerrar): ");
        scanf("%d", &cor_da_pele);

        if (cor_da_pele != -1) {
            total_pessoas++;

            switch (cor_da_pele) {
                case 1:
                    cor_a++;
                    break;
                case 2:
                    cor_b++;
                    break;
                case 3:
                    cor_c++;
                    break;
                default:
                    printf("Cor inválida.\n");
                    continue;
            }

            printf("Grau de escolaridade (1 -Ensino Superior Completo, 2 -Ensino Médio Incompleto): ");
            scanf("%d", &grau_escolaridade);

            switch (grau_escolaridade) {
                case 1:
                    ensino_superior_completo++;
                    break;
                case 2:
                    ensino_medio_incompleto++;
                    break;
                default:
                    printf("Grau de escolaridade invalido.\n");
                    continue;
            }
        }
    } while (cor_da_pele != -1);

    if (total_pessoas > 0) {
        float percen_superior_completo = (float)ensino_superior_completo / total_pessoas * 100;
        float percen_medio_incompleto = (float)ensino_medio_incompleto / total_pessoas * 100;

        printf("\nResultados:\n");
        printf("a) Distribuição da população por cor da pele:\n");
        printf("Cor A: %d pessoas\n", cor_a);
        printf("Cor B: %d pessoas\n", cor_b);
        printf("Cor C: %d pessoas\n", cor_c);
        printf("b) Percentual de pessoas com ensino superior completo: %.2f%%\n", percen_superior_completo);
        printf("c) Percentual de pessoas com ensino médio incompleto: %.2f%%\n", percen_medio_incompleto);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
