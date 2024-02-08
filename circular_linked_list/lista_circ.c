
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

void insere_fim_lista_circ(tipo_no **lst, int vl){
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


void insere_inicio_lista_circular(tipo_no **lst, int vl) {

}


void imprime_lista_dupla(tipo_no *lst){


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