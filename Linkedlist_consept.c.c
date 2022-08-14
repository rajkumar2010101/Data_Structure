#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head;
void creatList(int n);
void insertNodeAtBeginning(int data);
void displayList();
int main()
{
  clrscr();
  int n , data;
  printf("Enter the Total Number of nodes : ");
  scanf("%d",&n);
  creatList(n);
  printf("\nData in the list\n");
  displayList();
  printf("\nEnter data to insert at beginning of list :");
  scanf("%d",&data);
  insertNodeAtBeginning(data);
  printf("\nData in the List\n");
  displayList();
  return 0;
}
void creatList(int n)
{
  struct node * newNode,* temp;
  int data , i;
  head= (struct node*)malloc(sizeof(struct node));
  if(head==NULL)
  {
    printf("unable to allocate memory.");
  }
  else
  {
   printf("Enter the data of node 1 :");
   scanf("%d",&data);
   head->data=data;
   head->next=NULL;
   temp=head;
   for(i=2;i<=n;i++)
   {
     newNode=(struct node *) malloc(sizeof(struct node));
     if(newNode==NULL)
     {
       printf("unable to allocate memory.");
       break;
     }
     else
     {
      printf("Enter the data of node %d :",i);
      scanf("%d",&data);
      newNode->data=data;
      newNode->next=NULL;
      temp->next=newNode;
      }
   }
   printf("Singly Linked List Created Successful\n");
  }
}
void insertNodeAtBeginning(int data)
{
  struct node *newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  if(newNode==NULL)
  {
    printf("unable to allocate memory.");
  }
  else
  {
    newNode->data=data;
    newNode->next=head;
    head= newNode;
    printf("Data Inserted Successfully\n");
  }
}
void displayList()
{
  struct node *temp;
  if(head==NULL)
  {
    printf("List is Empty.");
  }
  else
  {
   temp=head;
   while(temp!=NULL)
   {
     printf("Data=%d\n",temp->data);
     temp=temp->next;
   }
}
getch();
}


