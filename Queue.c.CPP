#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 100
int queue[CAPACITY];
unsigned int size = 0;
unsigned int rear = CAPACITY -1;
unsigned int front = 0;
int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();
int main()
{
  clrscr();
  int ch , data;
  while(1)
  {
    printf("------------\n");
    printf("   Queue Array Implementation Program\n");
    printf("-------------\n");
    printf("1 . Enqueue\n");
    printf("2 . dequeue\n");
    printf("3 . size\n");
    printf("4 . Get Rear\n");
    printf("5 . Get Front\n");
    printf("6 . Exit\n");
    printf("------------\n");
    printf("select an option : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("\n Enter data to enqueue : ");
      scanf("%d",&data);
      if(enqueue (data))
      printf("element added into queue ");
      else
      printf("Queue is Full");
      break;
      case 2:
      data =dequeue();
      if(data==INT_MIN)
      printf("Queue is Empty");
      else
      printf("Data => %d",size);
      break;
      case 3:
      if(isEmpty())
      printf("Queue is Empty");
      else
      printf("Queue Size => %d",size);
      case 4:
      if(isEmpty())
      printf("Queue is Empty ");
      else
      printf("Rear => %d",getRear());
      break;
      case 5:
      if(isEmpty)
      printf("Queue is Empty");
      else
      printf("Front => %d",getFront());
      break;
      case 6:
      printf("Exiting from app.\n");
      exit(6);
      default:
      printf("Invalid choice,Please input number between(1 - 5)");
      break;
    }
    printf("\n\n");
  }
}
int enqueue(int data)
{
 if(isFull())
 {
  return 0;
 }
rear =  ( rear + 1 ) % CAPACITY;
size++;
queue[rear] = data;
return 1;
}
int dequeue()
{
  int data =INT_MIN;
  if(isEmpty())
  {
    return INT_MIN;
  }
  data= queue[front];
  front = ( front + 1 ) % CAPACITY;
  size--;
  return data;
}
int isFull()
{
  return (size = CAPACITY);

}
int isEmpty()
{
  return (size=0);
}
int getFront()
{
  return(isEmpty())
  ?INT_MIN
  :queue[front];
}
int getRear()
{
 return (isEmpty())
 ?INT_MIN
 :queue[rear];
}




