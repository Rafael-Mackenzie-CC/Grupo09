#include <stdio.h>
#include <stdlib.h>

void multlinha(int** mat, int linha, int coluna, int num) {
    int j;

    // Multiplica cada elemento da linha pelo número dado
    for (j = 0; j < coluna; j++) {
        mat[linha][j] *= num;
    }
}

void multCol(int** mat, int linhas, int col, int num) {
    int i;

    // Multiplica cada elemento da coluna pelo número dado
    for (i = 0; i < linhas; i++) {
        mat[i][col] *= num;
    }
}

int main() {
    int i, j;
    int linhas = 3, coluna = 3;
    int** mat;

    // Aloca memória para a matriz
    mat = (int**) malloc(linhas * sizeof(int*));
    for (i = 0; i < linhas; i++) {
        mat[i] = (int*) malloc(coluna * sizeof(int));
    }

    // Inicializa a matriz com alguns valores
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;
    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    // Exibe a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Multiplica a linha 1 pelo número 2
    multlinha(mat, 1, coluna, 2);

    // Exibe a matriz com a linha 1 multiplicada pelo número 2
    printf("Matriz com a linha 1 multiplicada por 2:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Multiplica a coluna 2 pelo número 3
    multCol(mat, linhas, 2, 3);

    // Exibe a matriz com a coluna 2 multiplicada pelo número 3
    printf("Matriz com a coluna 2 multiplicada por 3:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para a matriz
    for (i = 0; i < linhas; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
