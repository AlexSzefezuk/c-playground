#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int jogador, computador;
  srand(time(0));

  printf("--------------Jogo de Jopokenpô--------------\n");
  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  printf("Digite sua escolha: ");
  scanf("%d", &jogador);

  computador = rand() % 3 + 1;

  switch (jogador){
    case 1:
      printf("Jogador: Pedra - ");
      break;
    case 2:
      printf("Jogador: Papel - ");
      break;
    case 3:
      printf("Jogador: Tesoura - ");
      break;
    default:
      printf("Opção inválida");
      break;
  }

  switch (computador){
    case 1:
      printf("Computador: Pedra\n");
      break;
    case 2:
      printf("Computador: Papel\n");
      break;
    case 3:
      printf("Computador: Tesoura\n");
      break;
  }

  if (jogador == computador){
    printf("Empate!\n");
  } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)){
    printf("Jogador venceu!\n");
  } else {
    printf("Computador venceu!\n");
  }

  return 0;
}