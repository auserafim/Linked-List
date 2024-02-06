#include "lista_dupla.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_noh_dup *minha_lista_dup; 

  minha_lista_dup = NULL;

  insere_inicio_lista_dup(&minha_lista_dup, 1 );
  insere_inicio_lista_dup(&minha_lista_dup, 1 );

  insere_fim_lista_dup(&minha_lista_dup, 20);
  insere_fim_lista_dup(&minha_lista_dup, 20);

  insere_fim_lista_dup(&minha_lista_dup, 20);
  insere_pos_lista_dup(&minha_lista_dup, -5, 2);
  insere_pos_lista_dup(&minha_lista_dup, -7, 3);






  imprime_lista_dupla(minha_lista_dup);

  return EXIT_SUCCESS;

}

