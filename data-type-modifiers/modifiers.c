#include <stdio.h>

int main() {
  int numeroSinal = 3000000000; // Como bate no limite ao ler essa variavel rebemos um valor negativo equivalente ao overflow de valor que teve
  unsigned int numeroSinal = 3000000000; // aqui recebemos o valor normal pois com o bit amais de dados o limite é 4.2 Bilão

  int numeroNormal = 2147483647;
  long int numeroGrande = 2147483647;  




  return 0;
}

/*
  Unsigned
  Usando para espeficiar que só vamos trabalhar com valores positivos
  as variaveis por padrão tem um range que pode ser armazeanos delas
  o int vai do -2.1 Bilhão até o 2.1 Bilhão;
  usando um unsigned int da para ir do 0 até 4.2 Bilhão
  Arredondando

  da para usar tanto para inteiro quanto char

  single
  aumenta a capacidade de int e double
  
  modificador de formato do long é o ld
  temos também o long long int, cujo modificador é lld


  tem que cuidar o compilador que esta usando, sempre verificar isso, pois os tamanhos podem variar conforme o compilador

  short
  usando para uma variavel ocupar menos espaço na memoria
  obviamente os dados tem que caber nesse espaço menor

*/