#include "prototipo.a"

int main(void){

  Pilha pilha;
  int opcao;

  opcao = 1;
  pilha.inicio = 0;
  pilha.fim = 0;

  while (opcao != 0){
    system("clear");
    pilha_mostrar();
    menu_mostrar();
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
      pilha_entrar();
      break;
    case 2:
      pilha_sair();
      break;
    }
  }

  printf("\n\n");
  return 0;
}