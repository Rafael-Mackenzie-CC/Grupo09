#include <stdio.h>
#include <string.h>

// Define a estrutura de dados para armazenar informações de uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float peso;
    float altura;
};

int main() {
    // Define um vetor de pessoas com tamanho 3
    struct Pessoa pessoas[3];

    // Solicita que o usuário insira os dados de cada pessoa
    for (int i = 0; i < 3; i++) {
        printf("\nDigite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o peso da pessoa %d: ", i+1);
        scanf("%f", &pessoas[i].peso);

        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &pessoas[i].altura);
    }

    // Imprime os dados de todas as pessoas
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d: Nome=%s, Idade=%d, Peso=%.2f, Altura=%.2f\n", i+1, pessoas[i].nome, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
    }

    return 0;
}
