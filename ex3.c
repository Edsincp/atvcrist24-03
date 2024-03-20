#include <stdio.h>

int main() {
    char sexo;
    char estado_civil;
    int total_pessoas = 0, sexo_masculino = 0, sexo_feminino = 0;
    int solteiros = 0, casados = 0, divorciados = 0;

    printf("Digite o sexo (m - masculino, f - feminino, x - encerrar) e o estado civil (s - solteiro, c - casado, d - divorciado): \n");

    do {
        printf("Sexo (X para encerrar): ");
        scanf(" %c", &sexo);

        if (sexo != 'X') {
            total_pessoas++;

            switch (sexo) {
                case 'M':
                case 'm':
                    sexo_masculino++;
                    break;
                case 'F':
                case 'f':
                    sexo_feminino++;
                    break;
                default:
                    printf("Sexo inválido.\n");
                    continue;
            }

            printf("Estado civil (s - solteiro, c - casado, d - divorciado): ");
            scanf(" %c", &estado_civil);

            switch (estado_civil) {
                case 'S':
                case 's':
                    solteiros++;
                    break;
                case 'C':
                case 'c':
                    casados++;
                    break;
                case 'D':
                case 'd':
                    divorciados++;
                    break;
                default:
                    printf("Estado civil inválido.\n");
                    continue;
            }
        }
    } while (sexo != 'X');

    if (total_pessoas > 0) {
        float percen_solteiros = (float)solteiros / total_pessoas * 100;
        float percen_divorciados = (float)divorciados / total_pessoas * 100;

        printf("\nResultados:\n");
        printf("a)distribuição da população por sexo:\n");
        printf("masculino: %d pessoas\n", sexo_masculino);
        printf("feminino: %d pessoas\n", sexo_feminino);
        printf("b) percentual de pessoas solteiras: %.2f%%\n", percen_solteiros);
        printf("c) quantidade de pessoas casadas: %d\n", casados);
        printf("d) percentual de pessoas divorciadas: %.2f%%\n", percen_divorciados);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
