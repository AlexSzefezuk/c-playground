#include <stdio.h>

int main(){
  int idade;
  float altura;
  char nome[20];
  
  printf("Digite a sua idede: ");
  scanf("%d", &idade);
  printf("A ideade é: %d\n", idade);
  
  printf("Digite a sua altura: ");
  scanf("%f", &altura);
  printf("A altura é: %.2f\n", altura);
  
  printf("Digite a seu nome: ");
  scanf("%s", nome);
  printf("O nome é: %s\n", nome);
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