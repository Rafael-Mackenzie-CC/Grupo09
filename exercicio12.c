#include <stdio.h>
#include <string.h>

int buscar_caractere(char* string, char c) {
    int i;
    int tamanho = strlen(string);
    
    for (i = 0; i < tamanho; i++) {
        if (string[i] == c) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    char string[50];
    char c;
    
    printf("Digite uma string: ");
    scanf("%s", string);
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    int posicao = buscar_caractere(string, c);
    
    if (posicao == -1) {
        printf("Caractere nao encontrado na string.\n");
    } else {
        printf("O caractere %c foi encontrado na posicao %d da string.\n", c, posicao);
    }
    
    return 0;
}
