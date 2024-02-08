
#include "lista_circ.h"



tipo_no *aloca_no(int vl) {
  tipo_no *novo_no;
  novo_no = (tipo_no*) malloc(sizeof(tipo_no));
  if(novo_no !=NULL) {
    novo_no->valor = vl;
  novo_no->NULL;
  return novo_no;
  }
  return NULL;

}

void insere_fim_lista_cir(tipo_no **lst, int vl){
  if((*lst) ==NULL ) {
    (*lst) = aloca_no(vl);
    (*lst)->prox = (*prox);
  } else {
    tipo_no *novo_no, *aux;
    novo_no = aloca_no(vl);
    aux = (*lst);
    while(aux->prox !=(*lst)) {
      aux = aux->prox;

    }
    aux->prox = novo_no;
    novo_no->prox = (*lst);
  }
}


tipo_no *inserefim_lista_cir(tipo_no *lst, int) {
  tipo_no *novo_no , *aux;

  novo_no = aloca_no(vl);

  if(lst == NULL) {
    novo_no = aloca_no(vl);
    novo_no->prox = novo_no;
    return novo_no;
  } else {
    aux = (*lst);
    while(aux->prox != lst){
      aux = aux->prox;
    }
     aux->prox = novo_no;
    novo_no->prox = (*lst); 
  }
}


tipo_no *insereinicio_lista_cir(tipo_no *lst, int vl) {
  tipo_no novo_no*, aux*;
  novo_no = aloca_no(vl)
  if(novo_no == NULL) {
    return NULL;
  } else {
    if(lst==NULL) {
      novo_no->prox = novo_no;
      return novo_no; 
    }  else {
      aux = lst;
      while(aux->prox != lst) {
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



void imprime_lista_cir(tipo_no *lst){


  printf("Lista Circular:\n\t->"); 
  //primeiro no
  if(lst == NULL) {
    printf("[Nulo]\n")
  } else {
    printf("[%d]", lst->valor);
    aux = lst->prox;
  }

//outros nos 
  while(aux != lst) {
    printf("[%d]", aux->valor);
    aux = aux->prox;
  }
  printf("...(lista)")
}