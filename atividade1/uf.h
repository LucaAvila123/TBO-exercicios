#ifndef UF_H
#define UF_H

#include <stdbool.h>

// inicializa estrutura union find (usando variável global)
void init(int N);

// unifica a partir de dois pontos dados em um union-find de inteiros
void UF_union(int p, int q);

// busca o identificador escolhido em uma Union-Find
int UF_find(int p);

// verifica se dois pontos estão conectados
bool UF_connected(int p, int q);

#endif