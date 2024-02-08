#include "lista_dupla.h"


tipo_noh_dup *aloca_no(int vl) {
  tipo_noh_dup *novo_no;
  novo_no = (tipo_noh_dup*) malloc(sizeof(tipo_noh_dup));
  if (novo_no != NULL) {
    novo_no->ant = NULL;
    novo_no->prox = NULL;
    novo_no->valor = vl;
    return novo_no;
  } else {
    return NULL; 
  }
}

void insere_inicio_lista_dup(tipo_noh_dup **lst, int vl) {
  tipo_noh_dup *novo_no;
  novo_no = aloca_no(vl);
  if (novo_no != NULL) {
    if ((*lst) != NULL) {
      novo_no->prox = (*lst);
      (*lst)->ant = novo_no;
    }
    (*lst) = novo_no;
  } else {
    printf("Erro\n");
  }
}

void imprime_lista_dupla(tipo_noh_dup *lst) {
  if (lst != NULL) {
    printf("[NULL]");
    while (lst != NULL) {
      printf("->[%d]<-", lst->valor);
      lst = lst->prox;
    }
    printf("[NULL]\n");
  }
}

void insere_fim_lista_dup(tipo_noh_dup **lst, int vl) {
  tipo_noh_dup *novo_no, *aux;
  novo_no = aloca_no(vl);
  if (novo_no != NULL) {
    aux = (*lst);
    while (aux->prox != NULL) {
      aux = aux->prox;
    }
    novo_no->ant = aux;
    aux->prox = novo_no;
  }
}

void insere_pos_lista_dup(tipo_noh_dup **lst, int vl, int pos) {
  tipo_noh_dup *novo_no, *aux;
  int contador; 

  novo_no = aloca_no(vl); 

  if (novo_no != NULL) {
    contador = 0;
    aux = (*lst);
    while ((aux != NULL) && (contador < pos)) {
      aux = aux->prox;
      contador++;
    } 
    if (aux != NULL) {
      novo_no->prox = aux;
      novo_no->ant = aux->ant;
      aux->ant = novo_no;
      aux->ant->prox = novo_no;
    }
  }
}

int remove_inicio_lista_dupla(tipo_noh_dup **lst) {
  if ((*lst) != NULL) {
    tipo_noh_dup *temp = (*lst);
    int valor = temp->valor;
    (*lst) = (*lst)->prox;
    if (*lst != NULL) {
      (*lst)->ant = NULL;
    }
    free(temp);
    return valor;
  }
  return -1; // Return a default value indicating failure
}

int remove_fim_lista_dupla(tipo_noh_dup **lst) {
  if ((*lst) != NULL) {
    tipo_noh_dup *aux = (*lst);
    while (aux->prox != NULL) {
      aux = aux->prox;
    }
    int valor = aux->valor;
    if (aux->ant != NULL) {
      aux->ant->prox = NULL;
    } else {
      // The list only had one element
      (*lst) = NULL;
    }
    free(aux);
    return valor;
  }
  return -1; // Return a default value indicating failure
}

int remove_pos_lista_dupla(tipo_noh_dup **lst, int pos) {
  if ((*lst) != NULL) {
    tipo_noh_dup *aux = (*lst);
    int contador = 0;

    while ((aux != NULL) && (contador < pos)) {
      aux = aux->prox;
      contador++;
    }

    if (aux != NULL) {
      int valor = aux->valor;
      if (aux->ant != NULL) {
        aux->ant->prox = aux->prox;
      } else {
        // The element to be removed is the first one
        (*lst) = aux->prox;
        if (*lst != NULL) {
          (*lst)->ant = NULL;
        }
      }

      if (aux->prox != NULL) {
        aux->prox->ant = aux->ant;
      }

      free(aux);
      return valor;
    }
  }

  return -1; // Return a default value indicating failure
}


// int remove_inicio_lista_dupla(tipo_noh_dup**);
// int remove_fim_lista_dupla(tipo_noh_dup**);
// int remove_pos_lista_dupla(tipo_noh_dup**);