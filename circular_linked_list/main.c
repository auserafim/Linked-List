#include "lista_cir.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_no  *minha_lista_cir; 

  minha_lista_cir = NULL;

  insere_inicio_lista_dup(&minha_lista_cir, 1 );
  insere_inicio_lista_dup(&minha_lista_cir, 1 );

  insere_fim_lista_dup(&minha_lista_cir, 20);
  insere_fim_lista_dup(&minha_lista_cir, 20);

  insere_fim_lista_dup(&minha_lista_cir, 20);
  insere_pos_lista_dup(&minha_lista_cir, -5, 2);
  insere_pos_lista_dup(&minha_lista_cir, -7, 3);

  imprime_lista_cir(minha_lista_cir);

  return EXIT_SUCCESS;

}

