#include "fila_enc.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_no *minha_fila; 

  minha_fila = NULL;

  insere_fila_enc(&minha_fila, 1 );

  insere_fila_enc(&minha_fila, 202 );

  insere_fila_enc(&minha_fila, 123 );

  imprime_fila(minha_fila);


  remove_fila_enc(&minha_fila);

  imprime_fila(minha_fila);

  return EXIT_SUCCESS;

}

