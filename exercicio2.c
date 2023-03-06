#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *input_file, *output_file;
    char ch;

    // verifica se o número de argumentos está correto
    if (argc != 3) {
        printf("Uso: %s <arquivo de entrada> <arquivo de saída>\n", argv[0]);
        return 1;
    }

    // abre o arquivo de entrada
    input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // cria o arquivo de saída
    output_file = fopen(argv[2], "w");
    if (output_file == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    // copia o conteúdo do arquivo de entrada para o arquivo de saída
    while ((ch = fgetc(input_file)) != EOF) {
        fputc(ch, output_file);
    }

    // fecha os arquivos
    fclose(input_file);
    fclose(output_file);

    return 0;
}