#include <stdio.h>

// Definição de constantes
#define LINHAS 3
#define COLUNAS 3

int main() {
  int matriz[LINHAS][COLUNAS];
  int target = 5;
  int found = 0;
  int soma = 1;
  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      matriz[i][j] = soma;
      soma++;
    }
  }


  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      if (matriz[i][j] == target) {
        printf("Elemento %d encontrado no indice (%d, %d)\n", target, i, j);
        found = 1;
        break;
      }
    }
    if (found) break;
  }

  if (!found) {
    printf("Elemento %d não encontrado\n", target);
  }
    
  return 0;
}