#ifndef __LISTA_DUP_H__
#define __LISTA_DUP_H__

#include<stdio.h>
#include<stdlib.h>

struct est_no {
  int valor;
  struct est_no *prox; 

};

typedef struct est_no tipo_no; 

tipo_no *aloca_no(int);
void insere_inicio_lista_cir(tipo_no**, int);
void insere_fim_lista_cir(tipo_no**, int);
void insere_pos_lista_cir(tipo_no**, int, int);


int remove_inicio_lista_cir(tipo_no**);
int remove_fim_lista_cir(tipo_no**);
int remove_pos_lista_cir(tipo_no**, int);


void imprime_lista_cir(tipo_no *);
// tipo_no_dup *aloca_no(int); 
// int qtd_elementos_fila(tipo_no *);


#endif
