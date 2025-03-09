#include <stdio.h>

int main() {
  float temperatura, umidade;
  unsigned int estoque;

  printf("Entre com a temperatua: ");
  scanf("%f", &temperatura);
  
  printf("\nEntre com a umidade: ");
  scanf("%f", &umidade);

  printf("\nEntre com o estoque: ");
  scanf("%u", &estoque);

  if(temperatura > 30) {
    printf("\nA temperatura está muito alta\n");
  } else {
    printf("A temperatura está boa\n");
  }

  if(umidade > 50) {
    printf("A umidade está muito alta\n");
  } else {
    printf("A umidade está boa\n");
  }

  if(estoque < 500) {
    printf("O estoque esta muito baixo\n");
    printf("Comprei mais urgentemente!\n");
  } else {
    printf("O estoque esta dentro do limite\n");
  }

  return 0;
}