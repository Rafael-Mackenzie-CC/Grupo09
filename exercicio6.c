#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10], i, j, rows, columns;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &rows);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &columns);

    // Preenche a matriz com valores inseridos pelo usuário
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Exibe a matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calcula a transposta da matriz
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Exibe a matriz transposta
    printf("\nMatriz transposta:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
