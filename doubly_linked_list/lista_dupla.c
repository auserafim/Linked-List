#include "lista_dupla.h"



tipo_noh_dup *aloca_no(int vl) {
  tipo_noh_dup *novo_no;
  novo_no = (tipo_noh_dup*) malloc(sizeof(tipo_no_dup));
  if(novo_no !=NULL) {
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    novo_no->valor = vl;
    return novo_no;
  } else {
    return NULL; 
  }

} 


void insere_inicio_lista_dup(tipo_noh_dup **lst, int vl) {
  tipo_noh_dup *novo_no;
  novo_no = aloca_no(vl);
  if(novo_no != NULL) {
    if((*lst) != NULL) {
          novo_no->prox = (*lst);
          (*lst)->ant = novo_no;

    }

  (*lst) = novo_no;
  } else {
  printf("Erro")
  }
}


void imprime_lista_dupla(tipo_noh_dup *lst) {
  if(lst != NULL) {
  printf("[NULL]");
  while(lst != NULL) {
    printf("->[%d]<-", lst->valor);
    lst = lst->prox;
  }
  printf("NULL");
  }
}




void insere_fim_lista_dup(tipo_noh_dup **lst, int) {
    tipo_noh_dup *novo_no;
    int aux; 
    novo_no = aloca_no(vl);
    if(novo_no != NULL) {
      aux = (*lst);
      while(aux->prox != NULL) {
        aux = aux->prox;
      }
      novo_no->ant = aux;
      aux->prox = novo_no;
    }

}

void insere_pos_lista_dup(tipo_noh_dup **lst, int vl, int pos) {
  tipo_noh_dup *novo_no, *aux;
  int contador; 

  novo_no = (tipo_noh_dup*) malloc(sizeof(tipo_no_dup)); 

  if(novo_no != NULL) {
    contador = 0;
    aux = (*lst);
    while((aux != NULL) && (contador < pos)) {
      aux = aux->prox;
      contador++;
    } 
    if(aux != NULL){
      novo_no->prox = aux;
      novo_no->ant = aux->ant;
      aux->ant = novo_no;
      aux->ant->prox = novo_no;
    }
  }

}

int remove_inicio_lista_dupla(tipo_noh_dup**);
int remove_fim_lista_dupla(tipo_noh_dup**);
int remove_pos_lista_dupla(tipo_noh_dup**);