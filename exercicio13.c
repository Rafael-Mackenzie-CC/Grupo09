#include <stdio.h>
#include <string.h>

void remover_caractere(char* string, int posicao) {
    int tamanho = strlen(string);
    int i;
    
    for (i = posicao; i < tamanho; i++) {
        string[i] = string[i+1];
    }
}

int main() {
    char string[100];
    int posicao;
    
    printf("Digite uma string: ");
    scanf("%s", string);
    
    printf("Digite a posicao do caractere a ser removido: ");
    scanf("%d", &posicao);
    
    remover_caractere(string, posicao);
    
    printf("A string resultante e: %s\n", string);
    
    return 0;
}
