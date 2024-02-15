#include "lista_circ.h"

tipo_no *aloca_no(int vl) {
  tipo_no *novo_no;
  novo_no = (tipo_no*) malloc(sizeof(tipo_no));
  if(novo_no != NULL) {
    novo_no->valor = vl;
    novo_no->prox = NULL;  // Fix: Initialize novo_no->prox to NULL
    return novo_no;
  }
  return NULL;
}

void insere_fim_lista_cir(tipo_no **lst, int vl) {
  if ((*lst) == NULL) {
    (*lst) = aloca_no(vl);
    (*lst)->prox = (*lst);
  } else {
    tipo_no *novo_no, *aux;
    novo_no = aloca_no(vl);
    aux = (*lst);
    while (aux->prox != (*lst)) {
      aux = aux->prox;
    }
    aux->prox = novo_no;
    novo_no->prox = (*lst);
  }
}

tipo_no *inserefim_lista_cir(tipo_no *lst, int vl) {
  tipo_no *novo_no, *aux;

  novo_no = aloca_no(vl);

  if (lst == NULL) {
    novo_no = aloca_no(vl);
    novo_no->prox = novo_no;
    return novo_no;
  } else {
    aux = lst;
    while (aux->prox != lst) {
      aux = aux->prox;
    }
    aux->prox = novo_no;
    novo_no->prox = lst;
  }
  return lst;  // Fix: Return the updated list
}

tipo_no *insereinicio_lista_cir(tipo_no *lst, int vl) {
  tipo_no *novo_no, *aux;
  novo_no = aloca_no(vl);  // Fix: Added missing semicolon

  if (novo_no == NULL) {
    return NULL;
  } else {
    if (lst == NULL) {
      novo_no->prox = novo_no;
      return novo_no;
    } else {
      aux = lst;
      while (aux->prox != lst) {
        aux = aux->prox;
      }
      novo_no->prox = lst;
      aux->prox = novo_no;
      return novo_no;
    }
  }
}

void insere_inicio_lista_cir(tipo_no **lst, int vl) {
  tipo_no *novo_no, *aux;

  novo_no = aloca_no(vl);

  if ((*lst) == NULL) {
    // Lista vazia, insere o novo nó e faz ele apontar para si mesmo
    (*lst) = novo_no;
    novo_no->prox = novo_no;
  } else {
    // Lista não vazia, insere o novo nó no início
    aux = (*lst);
    while (aux->prox != (*lst)) {
      aux = aux->prox;
    }

    aux->prox = novo_no;
    novo_no->prox = (*lst);
    (*lst) = novo_no;
  }
}

void imprime_lista_cir(tipo_no *lst) {
  tipo_no *aux;  // Fix: Declare aux before using it

  printf("Lista Circular:\n\t->");
  // primeiro no
  if (lst == NULL) {
    printf("[Nulo]\n");
  } else {
    printf("[%d]", lst->valor);
    aux = lst->prox;
  }

  // outros nos
  while (aux != lst) {
    printf("[%d]", aux->valor);
    aux = aux->prox;
  }
  printf("...(lista)\n");
}


void insere_pos_lista_cir(tipo_no **lst, int vl, int pos) {
  tipo_no *novo_no, *aux, *ant;
  int i = 0;

  novo_no = aloca_no(vl);

  if (novo_no == NULL) {
    return;  // Unable to allocate memory
  }

  if ((*lst) == NULL) {
    // Lista vazia, insere o novo nó e faz ele apontar para si mesmo
    (*lst) = novo_no;
    novo_no->prox = novo_no;
  } else {
    aux = (*lst);
    ant = NULL;

    // Percorre a lista até a posição desejada ou o final
    while (i < pos && aux->prox != (*lst)) {
      ant = aux;
      aux = aux->prox;
      i++;
    }

    // Insere o novo nó na posição correta
    if (pos == 0) {
      // Inserção no início
      novo_no->prox = (*lst);
      aux = (*lst);
      while (aux->prox != (*lst)) {
        aux = aux->prox;
      }
      aux->prox = novo_no;
      (*lst) = novo_no;
    } else if (ant == NULL) {
      // Inserção na posição 1 em uma lista não vazia
      novo_no->prox = aux;
      aux = (*lst);
      while (aux->prox != (*lst)) {
        aux = aux->prox;
      }
      aux->prox = novo_no;
    } else {
      // Inserção em posição intermediária ou no final
      ant->prox = novo_no;
      novo_no->prox = aux;
    }
  }
}





int remove_fim_lista_cir(tipo_no **lst) {
  int valor;
  tipo_no *aux, *aux_ant;

  if ((*lst) != NULL) {
    if ((*lst)->prox == (*lst)) {
      valor = (*lst)->valor;
      free((*lst));
      (*lst) = NULL;
      return valor;
    } else {
      aux = (*lst);
      while (aux->prox != (*lst)) {
        aux_ant = aux;
        aux = aux->prox;
      }
      valor = aux->valor;
      aux_ant->prox = (*lst);
      free(aux);
      return valor;
    }
  }
  return -1; // Retorno de erro
}

int remove_inicio_lista_cir(tipo_no **lst) {
  int valor;
  tipo_no *aux;

  if ((*lst) != NULL) {
    if ((*lst)->prox == (*lst)) {
      valor = (*lst)->valor;
      free((*lst));
      (*lst) = NULL;
      return valor;
    } else {
      valor = (*lst)->valor;
      aux = (*lst);
      while (aux->prox != (*lst)) {
        aux = aux->prox;
      }
      aux->prox = (*lst)->prox;
      aux = (*lst);
      (*lst) = (*lst)->prox;
      free(aux);
      return valor;
    }
  }
  return -1; // Retorno de erro
}
