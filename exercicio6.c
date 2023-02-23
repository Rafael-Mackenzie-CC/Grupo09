#include <stdio.h>

int main() {
    int matriz[10][10], transposta[10][10], i, j, linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Preenche a matriz com valores inseridos pelo usuário
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe a matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcula a transposta da matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Exibe a matriz transposta
    printf("\nMatriz transposta:\n");
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
