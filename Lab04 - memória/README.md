EX 1 - 
celula *p, *q, *r;
p = (celula*) malloc(sizeof(celula));
q = (celula*) malloc(sizeof(celula));
r = (celula*) malloc(sizeof(celula));
p->conteudo = 10;
p->prox = q;
q->conteudo = 20;
q->prox = r;
r->conteudo = 30;
r->prox = NULL;

------------------------------------------------
EX 2 -
void imprime_lista(celula *p) {
    while (p != NULL) {
        printf("%d ", p->conteudo);
        p = p->prox;
    }
}

--------------------------------------------------
EX 3 - A quantidade de memória gasta por cada instância da célula depende da arquitetura do computador e do tamanho do tipo int naquela máquina. Normalmente, em arquiteturas de 32 bits, uma instância da célula ocupa 8 bytes na memória (4 bytes para o inteiro conteúdo e 4 bytes para o ponteiro prox). Já em arquiteturas de 64 bits, uma instância da célula ocupa 16 bytes na memória (8 bytes para o inteiro conteúdo e 8 bytes para o ponteiro prox).

---------------------------------------------------
EX 4 -
void remove_lista(celula **lista) {
    celula *aux;
    while (*lista != NULL) {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

----------------------------------------------------
EX 5 - 
void remove_lista(celula **lista) {
    celula *aux;
    while (*lista != NULL) {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

-----------------------------------------------------
EX 6 - O máximo de elementos possíveis na lista depende da memória disponível no computador e do tamanho ocupado por cada instância da célula. Supondo que o sistema operacional aloque a memória de forma contígua e que não haja fragmentação de memória, o número máximo de elementos na lista pode ser calculado dividindo o tamanho total de memória disponível pelo tamanho ocupado por uma instância da célula. Por exemplo, se a máquina possui 1GB de memória RAM e uma instância da célula ocupa 8 bytes, o número máximo de elementos na lista seria de 134,217,728 (ou seja, 1GB dividido por 8 bytes por célula). No entanto, na prática, outros fatores podem limitar o número máximo de elementos na lista, como o tamanho máximo de um processo ou o limite de alocação de memória definido pelo sistema operacional.