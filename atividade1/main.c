#include "uf.h"
#include <stdio.h>


int main(){
    int p, q, N = 0;
    scanf("%d", &N);

    init(N);

    while(scanf("%d %d", &p, &q) == 2){
        if(!UF_connected(p, q)){
            printf("Não conectados: %d %d\n", p, q);
            UF_union(p, q);
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", UF_find(i));
    }

    printf("\n");
    
    return 0;
}
