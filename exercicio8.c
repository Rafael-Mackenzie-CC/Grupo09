#include <stdio.h>

void transposta(int mat[][3], int trans[][3], int rows, int cols) {
    int i, j;

    // Transpõe a matriz
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int i, j;
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[3][3];

    // Exibe a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Chama a função para criar a transposta da matriz
    transposta(mat, trans, 3, 3);

    // Exibe a matriz transposta
    printf("Matriz transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}