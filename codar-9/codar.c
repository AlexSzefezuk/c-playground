#include <stdio.h>

void recursivo(int n) {
    if (n > 0) {
      recursivo(n - 1);
      printf("%d\n", n);
    }
}

int main() {
    recursivo(10);
    return 0;
}