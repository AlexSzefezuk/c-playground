#include <stdio.h>

int main(){
  int idade = 22;
  float altura = 1.75;
  char nome[20] = "Alex";
  
 
  printf("A idade do %s é: %d\n", nome, idade);
  printf("A altura é %.2f\n", altura);
}

/*
  Lista de especificadores

  %d: Imprime um inteiro no formato decimal.
  %i: Equivalente a %d.
  %f: Imprime um número de ponto flutuante no formato padrão.
  %e: Imprime um número de ponto flutuante na notação científica.
  %c: Imprime um único caractere.
  %s: Imprime uma cadeia (string) de caracteres.
*/