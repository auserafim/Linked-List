#ifndef __FILA_ENC__
#define __FILA_ENC__

#include<stdio.h>
#include<stdlib.h>

struct est_no {
  int valor;
  struct est_no *prox; // ponteiro para o próximo node 
};

typedef struct est_no tipo_no; 

void insere_fila_enc(tipo_no **, int);
int remove_fila_enc(tipo_no **);
void imprime_fila(tipo_no *);
tipo_no *aloca_no(int); 
int qtd_elementos_fila(tipo_no *);


#endif
