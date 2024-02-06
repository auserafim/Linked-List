#include "lista_circ_dup.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]){

  tipo_no_dup *minha_lista_cir_dup; 

  minha_lista_cir_dup = NULL;

  insere_inicio_lista_cir_dup (&minha_lista_cir_dup, 10 );
  insere_inicio_lista_cir_dup (&minha_lista_cir_dup, 15);

  insere_fim_lista_cir_dup (&minha_lista_cir_dup, 20);
  insere_fim_lista_cir_dup (&minha_lista_cir_dup, 30);

  imprime_lista_cir_dup(minha_lista_cir_dup);

  printf("O valor removido foi: [%d]\n", remove_inicio_lista_cir_dup(&minha_lista_cir_dup));
  printf("O valor removido foi: [%d]\n", remove_fim_lista_cir_dup(&minha_lista_cir_dup));


  imprime_lista_cir_dup(minha_lista_cir_dup);

  gira_roleta(&minha_lista_cir_dup);

    imprime_lista_cir_dup(minha_lista_cir_dup);


  return EXIT_SUCCESS;

}

