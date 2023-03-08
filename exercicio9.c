#include <stdio.h>
#include <stdlib.h>

void absMatriz(int** mat, int linhas, int colunas) {
    int i, j;

    // Substitui os números negativos por seu módulo
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = abs(mat[i][j]);
            }
        }
    }
}

int main() {
    int i, j;
    int linhas = 3, colunas = 3;
    int** mat;

    // Aloca memória para a matriz
    mat = (int**) malloc(linhas * sizeof(int*));
    for (i = 0; i < linhas; i++) {
        mat[i] = (int*) malloc(colunas * sizeof(int));
    }

    // Inicializa a matriz com alguns valores negativos
    mat[0][0] = -1;
    mat[0][1] = 2;
    mat[0][2] = -3;
    mat[1][0] = 4;
    mat[1][1] = -5;
    mat[1][2] = 6;
    mat[2][0] = -7;
    mat[2][1] = 8;
    mat[2][2] = -9;

    // Exibe a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Chama a função para substituir os números negativos por seus módulos
    absMatriz(mat, linhas, colunas);

    // Exibe a matriz com os números negativos substituídos por seus módulos
    printf("Matriz com números negativos substituídos por seus módulos:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
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
