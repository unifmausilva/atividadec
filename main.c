#include "tarefas.h"
#include <stdio.h>

int main() {
  funcao fs[] = {criar, deletar, listar, salvar, carregar};

  Tarefa tarefas[TOTAL];
  int pos;
  ERROS erro = fs4;
  if (erro != OK)
    pos = 0;

  int opcao;
  do {
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefas\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");

    scanf("%d", &opcao);
    opcao--;
    if (opcao > 2)
      printf("Opcao invalida\n");
    else if (opcao >= 0)
      fsopcao;
    else
      printf("Sair...\n");

  } while (opcao >= 0);

  fs3;
}
