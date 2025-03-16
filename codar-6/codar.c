#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numeroJogador, numeroComputador, resultado;
  char tipoCompoaracao;

  srand(time(0));
  numeroComputador = rand() % 100 + 1;

  printf("Escolha o tipo de comparação\n");
  printf("M - Maior\n");
  printf("N - Menor\n");
  printf("I - Igual\n");

  printf("Digite sua escolha: ");
  scanf(" %c", &tipoCompoaracao);

  printf("Digite um número: ");
  scanf("%d", &numeroJogador);

  printf("Número do computador: %d\n", numeroComputador);

  switch (tipoCompoaracao) {
    case 'M':
    case 'm':
      resultado = numeroJogador > numeroComputador ? 1 : 0;
      break;
    case 'N':
    case 'n':
      resultado = numeroJogador < numeroComputador ? 1 : 0;
      break;
    case 'I':
    case 'i':
      resultado = numeroJogador == numeroComputador ? 1 : 0;
      break;
    default:
      printf("Opção inválida\n");
      return 1;
  }

  if (resultado == 1){
    printf("Você acertou\n");
  } else {
    printf("Você errou\n");
  }

  return 0;
} 

