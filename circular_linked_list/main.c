#include "lista_circ.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_no  *minha_lista_cir; 

  minha_lista_cir = NULL;

  insere_inicio_lista_cir(&minha_lista_cir, 10 );
  insere_inicio_lista_cir(&minha_lista_cir, 15);

  insere_fim_lista_cir(&minha_lista_cir, 20);
  insere_fim_lista_cir(&minha_lista_cir, 30);

  insere_fim_lista_cir(&minha_lista_cir, 40);
  insere_pos_lista_cir(&minha_lista_cir, -5, 2);
  insere_pos_lista_cir(&minha_lista_cir, -7, 3);

  minha_lista_cir = insereinicio_lista_cir(minha_lista_cir, 5);
  imprime_lista_cir(minha_lista_cir);

  printf("Valor removido = %d\n", remove_fim_lista_cir(&minha_lista_cir));

  imprime_lista_cir(minha_lista_cir);


  printf("Valor removido = %d\n", remove_inicio_lista_cir(&minha_lista_cir));


  imprime_lista_cir(minha_lista_cir);




  return EXIT_SUCCESS;

}

