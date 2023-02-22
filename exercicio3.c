#include <stdio.h>

int main() {
int max;
// Pedindo o número máximo ímpar ao usuário
do {
    printf("Digite um número ímpar: ");
    scanf("%d", &max);
} while (max % 2 == 0);

int i, j, k;

// Imprimindo a primeira linha
for (i = 1; i <= max; i++) {
    printf("%d ", i);
}
printf("\n");

// Imprimindo as demais linhas
for (i = 2; i <= max / 2 + 1; i++) {
    // Imprimindo os espaços à esquerda
    for (j = 1; j < i; j++) {
        printf("  ");
    }
    // Imprimindo os números
    for (k = i; k <= max - i + 1; k++) {
        printf("%d ", k);
    }
    printf("\n");
}

return 0;
}