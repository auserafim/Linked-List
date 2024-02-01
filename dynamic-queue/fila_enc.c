#include "fila_enc.h"

tipo_no *aloca_no(int vl) {

  tipo_no *novo_no;

  novo_no = (tipo_no*) malloc (sizeof(tipo_no));

  if( novo_no != NULL) {
    novo_no->valor = vl;
    novo_no->prox = NULL;
  }
  return novo_no;
}


void insere_fila_enc( tipo_no **fila, int vl) {
  if((*fila) == NULL){
    (*fila) = aloca_no(vl);
  } else {
    tipo_no *novo_no, *aux;
    novo_no = aloca_no(vl);
    if(novo_no != NULL) {
      aux = (*fila);
      while(aux-> prox != NULL) 
          aux = aux->prox;
      aux->prox = novo_no;
    }
  }
}



void imprime_fila(tipo_no *fila) {
  printf("FILA:\n\t->");

  while(fila != NULL) {
    printf("[%d]", fila->valor);
    fila = fila->prox; 
  }
  printf("[NULL]\n");


}

/**
 * @brief Função que remove primeiro elemento da fila 
 * 
 * @param fila (tipo_no **) ponteiro de ponteiro
 */
int remove_fila_enc(tipo_no **fila) {

  int valor;
  tipo_no *aux; 
  if((*fila) != NULL ) {
    valor = (*fila)-> valor;
    aux = (*fila);
    (*fila) = (*fila)->prox; 
    free(aux);
    return valor;
  }

  return -1; 
}


int qtd_elementos_fila(tipo_no *fila) {
    int qtd = 0; 
    while (fila != NULL) {
        qtd++;
        fila = fila->prox;
    }
    return qtd;
}
