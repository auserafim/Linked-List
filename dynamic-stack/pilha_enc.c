#include "pilha_enc.h"


/**
 * @brief 
 * 
 * @param pl (tipo_no**)priumeiro ponteiro 
 * @param valor 
 */
void empilha(tipo_no **pl, int valor ) {
  tipo_no * novo_no;
  novo_no = aloca_no(valor);
  if(novo_no !=NULL) {
    novo_no->prox = (*pl);
    (*pl) = novo_no;
  }

}

/**
 * @brief Função auxiliar que aloca novo no na memória 
 * 
 * @param valor 
 * @return tipo_no* 
 */
tipo_no *aloca_no(int valor) {
  tipo_no *novo_no;
  novo_no = (tipo_no*) malloc(sizeof(tipo_no));
  if(novo_no != NULL) {
    novo_no->valor = valor;
    novo_no->prox = NULL;
    return novo_no;

  }
  return NULL;
}


/**
 * @brief Desempilha topo da pilha à esquerda  
 * 
 * @param valor 
 * @return tipo_no* 
 */

int desempilha(tipo_no **pl) {
  tipo_no *aux; 
  int valor; 
if((*pl) == NULL) {
    printf("ERRO");
    return -1; 
} else {
    valor = (*pl)->valor;
    aux = (*pl); 
    (*pl) = (*pl)->prox;
    free(aux);
    return valor; 
  }
}

void imprime_pilha(tipo_no *pl) {

  printf("Pilha: \nTOPO-> ");

  while(pl != NULL) {
    printf("[%d]->", pl->valor);
    pl = pl->prox;
  }

printf("[NULL]\n");

}