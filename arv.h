#ifndef ARV_H
#define ARV_H

typedef struct arv Arv;

Arv* criaArv();
Arv* insereArv(Arv* arv, int chave);
void destroiArv(Arv* arv);
int retornaChave(Arv* arv);
void imprimeArv(Arv* arv);

int ehFolha(Arv* arv);
int alturaArv(Arv* arv);

#endif