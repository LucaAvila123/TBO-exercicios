#include "arv.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    int N = atoi(argv[1]);
    int vezes = atoi(argv[2]);
    int maiorAltura[vezes];
    int vetor[N];
    
    for(int j = 0; j < vezes; j++){
        srand(time(NULL)); #include "arv.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    int N = atoi(argv[1]);
    int vezes = atoi(argv[2]);
    int maiorAltura[vezes];
    int vetor[N];
    
    for(int j = 0; j < vezes; j++){
        srand(time(NULL)); // should only be called once
        Arv* arv = criaArv(); 

        for(int i = 0; i < N; i++){
            vetor[i] = rand();
            arv = insereArv(arv, vetor[i]);
        }

        maiorAltura[j] = alturaArv(arv);
        destroiArv(arv);

    }
    
    float mediaAlturas = 0;
    float desvioPadraoAlturas = 0;
    for(int j = 0; j < vezes; j++){
        mediaAlturas += maiorAltura[j];
    }

    mediaAlturas /= vezes;

    for(int j = 0; j < vezes; j++){
        desvioPadraoAlturas += pow(maiorAltura[j] - mediaAlturas, 2);
    }
    desvioPadraoAlturas /= vezes;
    desvioPadraoAlturas = sqrt(desvioPadraoAlturas);

    printf("Alturas: ");
    for(int i = 0 ; i < vezes; i++){
        printf("%d ", maiorAltura[i]);
    }
    printf("\n");

    printf("Media das alturas medidas: %.2f\n", mediaAlturas);
    printf("Desvio padrao das alturas: %.2f\n", desvioPadraoAlturas);
    return 0;

}// should only be called once
        Arv* arv = criaArv(); 

        for(int i = 0; i < N; i++){
            vetor[i] = rand();
            arv = insereArv(arv, vetor[i]);
        }

        maiorAltura[j] = alturaArv(arv);
        destroiArv(arv);

    }
    
    float mediaAlturas = 0;
    float desvioPadraoAlturas = 0;
    for(int j = 0; j < vezes; j++){
        mediaAlturas += maiorAltura[j];
    }

    mediaAlturas /= vezes;

    for(int j = 0; j < vezes; j++){
        desvioPadraoAlturas += pow(maiorAltura[j] - mediaAlturas, 2);
    }
    desvioPadraoAlturas /= vezes;
    desvioPadraoAlturas = sqrt(desvioPadraoAlturas);

    printf("Alturas: ");
    for(int i = 0 ; i < vezes; i++){
        printf("%d ", maiorAltura[i]);
    }
    printf("\n");

    printf("Media das alturas medidas: %.2f\n", mediaAlturas);
    printf("Desvio padrao das alturas: %.2f\n", desvioPadraoAlturas);
    return 0;

}
