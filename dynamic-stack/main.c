#include "pilha_enc.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_no *minha_pilha; 

  minha_pilha  = NULL;

  empilha(&minha_pilha, 230);
  empilha(&minha_pilha, 20);

  empilha(&minha_pilha, 230);

  imprime_pilha(minha_pilha); 


  return EXIT_SUCCESS;

}

