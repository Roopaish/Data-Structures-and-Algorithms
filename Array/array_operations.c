#include<stdio.h>
#include<conio.h>
#define size 5

int arr[size], tracker=0;

void insert(int data, int pos){
  pos-=1;
  if(tracker == size){
    printf("\nArray is full");
    return;
  }

  if(pos>size){
    printf("\nInvalid position");
    return;
  }

  for(int i=size-1;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=data;
  tracker++;
}


void delete(int pos){
  pos-=1;
  if(size == 0){
    printf("\nArray is empty");
    return;
  }

  if(pos>size){
    printf("\nInvalid position");
    return;
  }

  for(int i=pos;i<size-1;i++)
  {
    arr[i]=arr[i+1];
  }
}

void display(){
  printf("\nThe array is: ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}

int main(){
  int i,data,pos;

  int choice;

  do{
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Display");
    printf("\n4. Exit");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice){
      case 1:
        printf("\nEnter the position you want to insert: ");
        scanf("%d",&pos);
        printf("\nEnter the data: ");
        scanf("%d",&data);
        insert(data,pos);
        display();
        break;
      case 2:
        printf("\nEnter the position of data you want to delete: ");
        scanf("%d",&pos);
        delete(pos);
        display();
        break;
      case 3:
        display();
        break;
      case 4: 
        printf("Exiting...");
        break;
      default:
        printf("\nInvalid choice");
    }
  }while(choice!=4);

  return 0;
}