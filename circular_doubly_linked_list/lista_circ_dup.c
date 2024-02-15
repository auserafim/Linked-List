#include "lista_circ_dup.h"

tipo_no_dup *aloca_no(int valor) {
  tipo_no_dup *novo_no;
  novo_no = (tipo_no_dup*)malloc(sizeof(tipo_no_dup));
  if (novo_no != NULL) {
    novo_no->valor = valor;
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    return novo_no;
  }
  return NULL;
}

void insere_inicio_lista_cir_dup(tipo_no_dup **lst, int valor) {
  tipo_no_dup *novo_no;
  novo_no = aloca_no(valor);
  if (novo_no != NULL) {
    if ((*lst) == NULL) {
      novo_no->prox = novo_no;
      novo_no->ant = novo_no;
      (*lst) = novo_no;
    } else {
      novo_no->prox = (*lst);
      novo_no->ant = (*lst)->ant;
      (*lst)->ant = novo_no;
      novo_no->ant->prox = novo_no;
      (*lst) = novo_no;
    }
  }
}


void insere_fim_lista_cir_dup(tipo_no_dup **lst, int valor) {
  tipo_no_dup *novo_no;
  novo_no = aloca_no(valor);
  if (novo_no != NULL) {
    if ((*lst) == NULL) {
      novo_no->prox = novo_no;
      novo_no->ant = novo_no;
      (*lst) = novo_no;
    } else {
      novo_no->prox = (*lst);
      novo_no->ant = (*lst)->ant;
      (*lst)->ant->prox = novo_no;
      (*lst)->ant = novo_no;
    }
  }
}


int remove_inicio_lista_cir_dup(tipo_no_dup **lst) {
  int valor;
  if ((*lst) != NULL) {
    if ((*lst)->prox == (*lst)) {
      valor = (*lst)->valor;
      free((*lst));
      (*lst) = NULL;
      return valor;
    } else {
      tipo_no_dup *aux = (*lst);
      valor = aux->valor;
      (*lst) = (*lst)->prox;
      (*lst)->ant = aux->ant;
      aux->ant->prox = (*lst);
      free(aux);
      return valor;
    }
  }

  return -1; // Retorno de erro
}

void imprime_lista_cir_dup(tipo_no_dup *lst) {
  tipo_no_dup *aux;
  printf("Lista CIRCULAR DUPLAMENTE ENCADEADA:\nLista --> ");
  aux = lst;
  
  if (aux != NULL) {
    do {
      printf("[%d]->", aux->valor);
      aux = aux->prox;
    } while (aux != lst);
    printf("(lista)\n");
  } else {
    printf("(lista vazia)\n");
  }
}
