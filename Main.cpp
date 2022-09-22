#include "prototipo.a"

Pilha pilha;

void pilha_entrar(void){
  if (pilha.fim == tamanho){
    printf("\nA pilha está cheia!!!\n");
  }else{
    printf("\nDigite o valor a ser empilhado: ");
    scanf("%d", &pilha.dados[pilha.fim]);
    pilha.fim++;
  }
}

void pilha_sair(void){
  if (pilha.inicio == pilha.fim){
    printf("\nA pilha está vazia!!!\n\n");
  }else{
    pilha.dados[pilha.fim - 1] = 0;
    pilha.fim--;
  }
}

void pilha_mostrar(void){
  printf("[ ");

  for (int i = 0; i < tamanho; i++){
    printf("%d ", pilha.dados[i]);
  }
  printf("]\n\n");
}

void menu_mostrar(void){
  printf("Escolha uma opção:\n");
  printf("[1] - Empilhar\n");
  printf("[2] - Desempilhar\n");
  printf("[0] - Sair\n");
}
