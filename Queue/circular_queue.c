#include<stdio.h>
#include <stdbool.h>

int max_size = 5;
int front = -1;
int rear = -1;
int queue[5];

bool isFull(){
  if((rear + 1) % max_size == front){
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

void enQueue(int data){
  if(isFull()){
    printf("\nQueue is full! Can't add more.");
    return;
  }

  if(front == -1){
    front = 0;
  }
  rear = (rear + 1) % max_size;

  queue[rear] = data;
  printf("\nfront = %d rear = %d", front, rear);
  printf("\nInserted <- %d", data);
}

void deQueue(){
  if(isEmpty()){
    printf("\nQueue is empty! Can't remove any.");
    return;
  }

  int temp = queue[front];
  if(front == rear){
    front = -1;
    rear = -1;
  }else{
    front = (front + 1) % max_size;
  }
  
  printf("\nfront = %d rear = %d", front, rear);
  printf("\nDeleted -> %d",temp);
}

void display(){
  if(isEmpty()){
    printf("\nQueue is empty!");
    return;
  }

  int i = front;
  printf("\n\nQueue : ");
  printf("\nfront = %d rear = %d items = ", front, rear);
  for(i ; i != rear ; i = (i + 1) % max_size){
    printf("%d ",queue[i]);
  }
  printf("%d ", queue[i]);
}

int main(){
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);

  display();

  printf("\n");
  deQueue();
  enQueue(6);
  enQueue(7);
  display();

  printf("\n");
  deQueue();
  display();

  return 0;
}