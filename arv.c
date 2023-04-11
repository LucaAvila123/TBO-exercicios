#include "arv.h"
#include <stdlib.h>
#include <stdio.h>

struct arv{
    int chave;
    Arv* esq;
    Arv* dir;
};

Arv* criaArv(void){
    return NULL;
}

Arv* insereArv(Arv* arv, int chave){
    if(arv != NULL){
        if(chave < arv -> chave){
            arv -> esq = insereArv(arv -> esq, chave);
            return arv;
        }
        
        else if(chave > arv -> chave){
            arv -> dir = insereArv(arv -> dir, chave);
            return arv;
        }
        else {
            return arv; // considerando casos de chaves com valores iguais
        }
    }

    arv = (Arv*) calloc (1, sizeof(Arv));
    arv -> chave = chave;
    arv -> esq = arv -> dir = NULL;
    return arv;
}

int retornaChave(Arv* arv){
    if(arv != NULL) return arv -> chave;
    return -1;
}

void destroiArv(Arv* arv){
    if(arv != NULL){
        destroiArv(arv -> esq);
        destroiArv(arv -> dir);
        free(arv);
    }
    
}

void imprimeArv(Arv* arv){
    printf("<");
    if(arv != NULL){
        printf("%d", retornaChave(arv));
        imprimeArv(arv -> esq);
        imprimeArv(arv -> dir);
    }
    printf(">");
}

int ehFolha(Arv* arv){
    if(arv != NULL){
        if(arv -> esq == NULL && arv -> dir == NULL)
            return 1;
    }
    return 0;
}

int alturaArv(Arv* arv){
    if(arv == NULL) return -1;
    //  copiei, sem medo de ser feliz, de https://www.ime.usp.br/~pf/algoritmos/aulas/bint.html
    else{
        int he = alturaArv (arv -> esq);
        int hd = alturaArv (arv -> dir);
        if (he < hd) return hd + 1;
        else return he + 1;
    }
}