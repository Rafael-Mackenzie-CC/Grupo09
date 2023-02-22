#include <stdio.h>

int main() {
    int matrix[10][10], i, j, rows, columns, number, choice, index;

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

    // Permite que o usuário escolha se deseja multiplicar uma linha ou uma coluna
    printf("\nDeseja multiplicar uma linha (1) ou uma coluna (2)? ");
    scanf("%d", &choice);

    // Permite que o usuário escolha a linha ou coluna a ser multiplicada
    printf("\nDigite o índice da linha ou coluna a ser multiplicada (de 0 a %d): ", (choice == 1) ? (rows-1) : (columns-1));
    scanf("%d", &index);

    // Permite que o usuário insira o número pelo qual a linha ou coluna será multiplicada
    printf("\nDigite o número pelo qual a linha ou coluna será multiplicada: ");
    scanf("%d", &number);

    // Multiplica a linha ou coluna escolhida pelo número fornecido
    if (choice == 1) {
        for (j = 0; j < columns; j++) {
            matrix[index][j] *= number;
        }
    }
    else {
        for (i = 0; i < rows; i++) {
            matrix[i][index] *= number;
        }
    }

    // Exibe a matriz resultante
    printf("\nMatriz resultante:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
