#include "item.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void sort(Item *a, int lo, int hi);

int main(int argc, char* argv[]){

    int N = atoi(argv[1]); //número de elementos a serem ordenados
    Item *vetor = malloc(N*sizeof(Item));

    // colocando os elementos no vetor alocado dinamicamente
    for(int i=0; i < N; i++){
        scanf("%d\n", &vetor[i]);
    }

    clock_t start, stop;
    start = clock();
    sort(vetor, 0, N);
    stop = clock();

    double time_taken = ((double) stop - start) / CLOCKS_PER_SEC;
    
    
    // imprimindo valores ordenados
    for(int i=0; i < N; i++){
        printf("%d\n", vetor[i]);
    }

    printf("Tempo total: %lf\n", time_taken);
    free(vetor);
    return 0;
}
