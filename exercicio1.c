#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char linha[100];

    if (argc < 2) {
        printf("Uso: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    while (fgets(linha, sizeof(linha), fp) != NULL) {
        printf("%s", linha);
    }

    fclose(fp);
    return 0;
}
