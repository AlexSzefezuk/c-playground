#include <stdio.h>
/*
  Variáveis são case sensitve
  Não podemos usar palavras reservadas

  A sintaxe é [tipo] [nome]

  - Não pode iniciar com número
  - Pode ter _
*/

/*
  Tipos de dados primitivos em C
  - int: Números inteiros
  - float: Números decimais
  - double: Números decimais (mais casas decimais do que o float)
  - char: string
  - boolean: Boleanos
*/

// Sempre inicializar as variáveis
// Se o espaço em memória já estiver sido usado, ele ainda pode conter valores
// Inicializando evitamos isso

int main(){
  int idade;

  // inicializações
  int quantidade = 1;
  float altura = 1.75;
  char letra = 'A';
  char nome[20] = 'Alex';
  idade = 22;

  // Reatribuição
  quantidade = 2;
}
