#include <stdio.h>

void TOH(int n, char src, char aux, char des){
  if(n == 1){
    printf("\nMove %d disk from %c to %c", n, src, des);
    return;
  }
  TOH(n-1, src, des, aux);
  printf("\nMove %d disk from %c to %c",n, src, des);
  TOH(n-1, aux, src, des);
}

int main() {
  TOH(3, 'A', 'B', 'C');

  return 0;
}