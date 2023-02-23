#include <stdio.h>

int main() {
    int matriz[10][10], i, j, linhas, colunas, num, escolha, indice;

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

    // Permite que o usuário escolha se deseja multiplicar uma linha ou uma coluna
    printf("\nDeseja multiplicar uma linha (1) ou uma coluna (2)? ");
    scanf("%d", &escolha);

    // Permite que o usuário escolha a linha ou coluna a ser multiplicada
    printf("\nDigite o índice da linha ou coluna a ser multiplicada (de 0 a %d): ", (escolha == 1) ? (linhas-1) : (colunas-1));
    scanf("%d", &indice);

    // Permite que o usuário insira o número pelo qual a linha ou coluna será multiplicada
    printf("\nDigite o número pelo qual a linha ou coluna será multiplicada: ");
    scanf("%d", &num);

    // Multiplica a linha ou coluna escolhida pelo número fornecido
    if (escolha == 1) {
        for (j = 0; j < colunas; j++) {
            matriz[indice][j] *= num;
        }
    }
    else {
        for (i = 0; i < linhas; i++) {
            matriz[i][indice] *= num;
        }
    }

    // Exibe a matriz resultante
    printf("\nMatriz resultante:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
