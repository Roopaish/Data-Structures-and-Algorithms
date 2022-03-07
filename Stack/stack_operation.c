#include<stdio.h>

int max_size = 5;
int tos = -1;
int stack[5];

void push(int data){
  if(tos == max_size - 1){
    printf("\nStack is full! Can't add more");
    return;
  }

  tos++;
  stack[tos] = data;
  printf("\nInserted <- %d", data);
}

void pop(){
  if(tos == -1){
    printf("\nStack is empty! Can't remove any");
    return;
  }

  tos--;
  printf("\nDeleted -> %d",stack[tos]);
}

void display(){
  if(tos == -1){
    printf("\nStack is empty!");
    return;
  }

  printf("\nStack : ");
  for(int i = 0; i <= tos; i++){
    printf("%d ", stack[i]);
  }
}

int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  push(6);

  display();

  pop();
  display();

  return 0;
}