
#ifndef prototipo_a
#define prototipo_a

#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

typedef struct{
  int dados[tamanho], inicio, fim;
} Pilha;

void pilha_entrar(void);
void pilha_sair(void);
void pilha_mostrar(void);
void menu_mostrar(void);

#endif 