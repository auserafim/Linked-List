#ifndef __LISTA_CIR_DUP_H__
#define __LISTA_CIR_DUP_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct est_noh {
  int valor;
  struct est_noh *prox;
  struct est_noh *ant; // Fix: Corrected typo here
};

typedef struct est_noh tipo_no_dup;

tipo_no_dup *aloca_no(int);
void insere_inicio_lista_cir_dup(tipo_no_dup**, int);
void insere_fim_lista_cir_dup(tipo_no_dup**, int);
void insere_pos_lista_cir_dup(tipo_no_dup**, int, int);
int remove_inicio_lista_cir_dup(tipo_no_dup**);
int remove_fim_lista_cir_dup(tipo_no_dup**);
int remove_pos_lista_cir_dup(tipo_no_dup**, int);
tipo_no_dup *inserefim_lista_cir_dup(tipo_no_dup*, int);
tipo_no_dup *insereinicio_lista_cir_dup(tipo_no_dup*, int);
void imprime_lista_cir_dup(tipo_no_dup *);
void gira_roleta(tipo_no_dup**);

#endif
