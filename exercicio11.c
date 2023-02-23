#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void soma_multiplica_LINHAS(int matriz[][COLUNAS], int linha1, int linha2) {
    int i;
    int soma = 0;
    int multiplica = 1;
    
    // Soma e multiplicação dos elementos das linhas
    for (i = 0; i < COLUNAS; i++) {
        soma += matriz[linha1][i];
        multiplica *= matriz[linha1][i];
    }
    
    for (i = 0; i < COLUNAS; i++) {
        soma += matriz[linha2][i];
        multiplica *= matriz[linha2][i];
    }
    
    // Armazena o resultado na segunda linha
    for (i = 0; i < COLUNAS; i++) {
        matriz[linha2][i] = (i % 2 == 0) ? soma : multiplica;
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    
    // Leitura da matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Impressão da matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Soma e multiplicação das linhas 0 e 1
    soma_multiplica_LINHAS(matriz, 0, 1);
    
    // Impressão da matriz resultante
    printf("\nMatriz resultante:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
