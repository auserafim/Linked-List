#include "lista_circ_dup.h"

tipo_no_dup *aloca_no(int valor) {
  tipo_no_dup *novo_no;
  novo_no = (tipo_no_dup*)malloc(sizeof(tipo_no_dup));
  if (novo_no != NULL) {
    novo_no->valor = valor;
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    return novo_no;
  }
  return NULL;
}

void insere_inicio_lista_cir_dup(tipo_no_dup **lst, int valor) {
  tipo_no_dup *novo_no;
  novo_no = aloca_no(valor);
  if (novo_no != NULL) {
    if ((*lst) == NULL) {
      novo_no->prox = novo_no;
      novo_no->ant = novo_no;
      (*lst) = novo_no;
    } else {
      novo_no->prox = (*lst);
      novo_no->ant = (*lst)->ant;
      (*lst)->ant = novo_no;
      novo_no->ant->prox = novo_no;
      (*lst) = novo_no;
    }
  }
}


void insere_fim_lista_cir_dup(tipo_no_dup **lst, int valor) {
  tipo_no_dup *novo_no;
  novo_no = aloca_no(valor);
  if (novo_no != NULL) {
    if ((*lst) == NULL) {
      novo_no->prox = novo_no;
      novo_no->ant = novo_no;
      (*lst) = novo_no;
    } else {
      novo_no->prox = (*lst);
      novo_no->ant = (*lst)->ant;
      (*lst)->ant->prox = novo_no;
      (*lst)->ant = novo_no;
    }
  }
}


int remove_inicio_lista_cir_dup(tipo_no_dup **lst) {
  tipo_no_dup *aux;
  int valor;


  if ((*lst) != NULL) {
    if ((*lst)->prox == (*lst)) {
      valor = (*lst)->valor;
      free((*lst));
      (*lst) = NULL;
      return valor;
    } else {
      aux = (*lst);
      valor = aux->valor;
      (*lst) = (*lst)->prox;
      (*lst)->ant = aux->ant;
      aux->ant->prox = (*lst);
      free(aux);
      return valor;
    }
  }

  return -1; // Retorno de erro
}


int remove_fim_lista_cir_dup(tipo_no_dup **lst) {
  int valor;

  if ((*lst) != NULL) {
    tipo_no_dup *aux = (*lst)->ant;  // Get the last node

    if ((*lst)->prox == (*lst)) {
      // Only one node in the list
      valor = (*lst)->valor;
      free(*lst);
      (*lst) = NULL;
      return valor;
    } else {
      valor = aux->valor;
      aux->ant->prox = (*lst);
      (*lst)->ant = aux->ant;
      free(aux);
      return valor;
    }
  }

  return -1; // Retorno de erro
}

void imprime_lista_cir_dup(tipo_no_dup *lst) {
  tipo_no_dup *aux;
  printf("Lista CIRCULAR DUPLAMENTE ENCADEADA:\nLista --> ");
  aux = lst;
  
  if (aux != NULL) {
    do {
      printf("[%p] <- [%d] -> [%p]", (void*)aux->ant, aux->valor, (void*)aux->prox);
      if (aux->prox != lst) {
        printf(" <-> ");
      }
      aux = aux->prox;
    } while (aux != lst);
    printf("(lista)\n");
  } else {
    printf("(lista vazia)\n");
  }
}



void gira_roleta(tipo_no_dup**lst) {
  int direcao, contador;
 if((*lst) = NULL) { // Verifica se a estrutura esta vazia
  srand(1);//semente fixa 
  srand(time(NULL)); // semente baseada no clock 
  //sorteia a direção do giro: 1 para direita; 0 para a esquerda 
  direcao = rand() % 2;
  contador = rand() % 100;
  if(direcao == 0) { // executa giro para esquerda 
    printf("Giro para Esquerda");
  printf("\n%d passos..", contador);
    while(contador > 0) {
      (*lst) = (*lst)->ant;
      contador--;
    }
  } else { // executa giro para direita 
    printf("Giro para Direita");
  printf("\n%d passos..", contador);
  while(contador > 0) {
    (*lst) = (*lst)->prox;
    contador--;
  }
  }
 }
}