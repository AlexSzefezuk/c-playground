#include <stdio.h>

int main() {
  // int i = 0;
  // while (i <=10) {
  //   if(i % 2 == 0) {
  //     printf("%d\n",i);
  //   }
  //   i++;
  // }

  // int numero; 
  // do {
  //   printf("Digite um número par para sair do programa: ");
  //   scanf("%d", &numero);

  //   if (numero % 2 == 0) {
  //     printf("%d é par!\n", numero);
  //   } else {
  //     printf("%d é impar!\n", numero);
  //   }
  // } while (numero % 2 != 0);

  // printf("Saiu do programa!");

  int numero, i;

  printf("Digite um número para calcular a tabuada: ");
  scanf("%d", &numero);
  for(i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }


  return 0;
}