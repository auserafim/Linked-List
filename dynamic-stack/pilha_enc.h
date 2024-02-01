#ifndef __PILHA_ENC_H__
#define __PILHA_ENC_H__

#include<stdio.h>
#include<stdlib.h>

struct est_noh {
  int valor;
  struct est_noh *prox; // ponteiro para o próximo node 
};

typedef struct est_noh tipo_no; 

void empilha(tipo_no **, int);
int desempilha(tipo_no **);
void imprime_pilha(tipo_no *);
tipo_no *aloca_no(int); 
// int qtd_elementos_fila(tipo_no *);
#endif
