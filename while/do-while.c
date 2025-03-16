#include <stdio.h>

// Vai garantir que o código será executado pelo menos uma vez

int main() {
  int i = 1;

  do {
    printf("%d\n", i);
    i++;
  } while (i <= 5);
  

  return 0;
};