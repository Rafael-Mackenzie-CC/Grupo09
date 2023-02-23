#include <stdio.h>
#include <string.h>

void inserir_caracter(char* string, char caracter, int posicao) {
    int tamanho = strlen(string);
    int i;
    
    for (i = tamanho; i >= posicao; i--) {
        string[i+1] = string[i];
    }
    
    string[posicao] = caracter;
}

int main() {
    char string[100];
    char caracter;
    int posicao;
    
    printf("Digite uma string: ");
    scanf("%s", string);
    
    printf("Digite o caracter a ser inserido: ");
    scanf(" %c", &caracter);
    
    printf("Digite a posicao onde o caracter deve ser inserido: ");
    scanf("%d", &posicao);
    
    inserir_caracter(string, caracter, posicao);
    
    printf("A string resultante e: %s\n", string);
    
    return 0;
}