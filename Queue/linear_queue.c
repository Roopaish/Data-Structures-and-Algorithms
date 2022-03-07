#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int max_size = 5;
int front = -1;
int rear = -1;
int queue[5];

bool isFull(){
  if(rear == max_size - 1){
    return true;
  }
  return false;
}

bool isEmpty(){
  if(front == -1){
    return true;
  }
  return false;
}

void enQueue(int item){
  if(isFull()){
    printf("\nQueue is full! Can't add more.");
    return;
  }

  if(front == -1){
    front = 0;
  }
  rear++;
  queue[rear] = item;

  printf("\nInsetred <- %d",item);
}

void deQueue(){
  if(isEmpty()){
    printf("\nQueue is empty! Can't remove any");
    return;
  }

  int temp = queue[front];
  if(front == rear){
    front = -1;
    rear = -1;
  }else{
    front++;
  }

  printf("\nDeleted -> %d",temp);
}

void display(){
  if(isEmpty()){
    printf("\nQueue is empty");
    return;
  }

  printf("\nQueue : ");
  for(int i=front; i <= rear;i++){
    printf("%d ",queue[i]);
  }
}

int main(){
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);

  display();

  deQueue();
  deQueue();
  display();

  return 0;
}