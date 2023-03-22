#include "uf.h"

static int id[1000];
static int size;

bool UF_connected(int p, int q){
    return UF_find(p) == UF_find(q);
}

void init(int N){
    size = N;
    for(int i =0; i < size; i++){
        id[i] = i; // começando cada item com o próprio indice da array (nada conectado)
    }
}

// o union-find de números opera de acordo com uma chave que vai retornar o índice em questão
// vai dar problema se o valor de p for maior que o de size
int UF_find(int p){
    return id[p];
}

// arbitrariamente mudando o valor de q para p (vai ter que percorrer o vetor inteiro)
// acho que a ideia é aprender a otimizar isso, mas nem sei
void UF_union(int p, int q){
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < size; i++) {
        if (id[i] == pid) { // Troca todas os valores de id[p]
            id[i] = qid; // por id[q].
        } // No maximo 2N + 2 acessos ao array.
    }
}