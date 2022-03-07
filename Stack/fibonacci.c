#include <stdio.h>

int fibonacci(int n){
  if(n == 0 || n == 1){
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  printf("\nFibonacci Series upto 10 terms \n");
  for(int i = 0; i <= 10; i++){
    printf("%d ", fibonacci(i));
  }

  return 0;
}