#include <stdio.h>

int operacoesMatematicas() {
  printf("---------------Iniciando operações matematicas---------------\n");

  int numero1, numero2;
  int soma, subtracao, multiplicacao, divisao;

  printf("Informe o número 1: ");
  scanf("%d", &numero1);

  printf("Informe o número 2: ");
  scanf("%d", &numero2);

  soma = numero1 + numero2;
  subtracao = numero1 - numero2;
  multiplicacao = numero1 * numero2;
  divisao = numero1 / numero2;

  printf("A soma é: %d\n", soma);
  printf("A subtracao é: %d\n", subtracao);
  printf("A multiplicacao é: %d\n", multiplicacao);
  printf("A divisao é: %d\n", divisao);

  return 0;
}

/*
  Soma (+)
  Subtração (-)
  Multiplicação (*)
  Divisão (/)
*/

int atribuicoesComOperacoesMatematicas() {
  printf("---------------Iniciando Atribuições---------------\n");

  int resultado;

  resultado = 10;
  printf("Atribuição simples = 10: %d\n", resultado);
  
  resultado += 20;
  printf("Atribuição com Soma += 20: %d\n", resultado);
  
  resultado -= 15;
  printf("Atribuição com Subtração -= 15: %d\n", resultado);
  
  resultado *= 2;
  printf("Atribuição com Multiplicação *= 2: %d\n", resultado);
  
  resultado /= 3;
  printf("Atribuição com Divisão /= 3: %d\n", resultado);

  return 0;
}

/*
  Atribuição Simples (=)
  Atribuição com Soma (+=)
  Atribuição com Subtração (-=)
  Atribuição com Multiplicação (*=)
  Atribuição com Divisão (/=)
*/

int incrementosEDecremento() {
  printf("---------------Iniciando Operadores de incremento e decremento---------------\n");

  int numero = 10;

  printf("Numero inicia em: %d\n", numero);

  ++numero;
  printf("Numero depois de pre incrementar: %d\n", numero);
  
  numero++;
  printf("Numero depois de pos incrementar: %d\n", numero);

  --numero;
  printf("Numero depois de pre decrementar: %d\n", numero);
  
  numero--;
  printf("Numero depois de pos decrementar: %d\n", numero);
  


  return 0;
}

/*
  Pré incremento (++variavel)
  Pós incremento (variavel++)
  Pré decremento (--variavel)
  Pós decremento (variavel--)

  a diferença de pré e pós e quando o valor será atribuido a variavel
  pre ela será modificada antes de atribuir
  pós ela será modificada depois de atribuir
  
*/


int main() {
  operacoesMatematicas();
  atribuicoesComOperacoesMatematicas();
  incrementosEDecremento();
};