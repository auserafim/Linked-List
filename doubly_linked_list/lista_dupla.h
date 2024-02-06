#ifndef __LISTA_DUP_H__
#define __LISTA_DUP_H__

#include<stdio.h>
#include<stdlib.h>

struct est_no_dup {
  int valor;
  struct est_no_dup *prox; 
  struct est_no_dup *ant; 

};

typedef struct est_no_dup tipo_noh_dup; 

void insere_inicio_lista_dup(tipo_noh_dup**, int);
void insere_fim_lista_dup(tipo_noh_dup**, int);
void insere_pos_lista_dup(tipo_noh_dup**, int, int);


int remove_inicio_lista_dupla(tipo_noh_dup**);
int remove_fim_lista_dupla(tipo_noh_dup**);
int remove_pos_lista_dupla(tipo_noh_dup**, int);


void imprime_lista_dupla(tipo_noh_dup *);
// tipo_no_dup *aloca_no(int); 
// int qtd_elementos_fila(tipo_no *);


#endif
