#include <stdio.h>
#include <string.h>

int main() {
    char nome1[20], nome2[20];
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    if (strcmp(nome1, nome2) < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else {
        printf("%s\n%s\n", nome2, nome1);
    }

    return 0;
}
