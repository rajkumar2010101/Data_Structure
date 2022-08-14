#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void push(int element);
int pop();
int main()
{
   
   int choice , data;
   while(1)
   {
     printf("--------------\n");
     printf("stack implmention program\n");
     printf("1. push\n");
     printf("2. pop\n");
     printf("3. size\n");
     printf("4. exit\n");
     printf("--------------\n");
     printf("Enter your Choice :");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
       printf(" Enter data put into stack: ");
       scanf("%d",&data);
       push(data);
       break;
       case 2:
       data=pop();
       if(data!=INT_MIN)
       printf("Data=> %d\n",data);
       break;
       case 3:
       printf(" Stack Size : %d\n",top+1);
       break;
       case 4:
       printf("Exiting from app\n");
       exit(0);
       break;
       default:
       printf("Invalid choice,please try again\n");
     }
     printf("\n\n");
   }
      return(0);
}
     void push(int element)
     {
       if(top >= SIZE)
       {
	 printf("Stack overflow,can not add more element\n");
	 return;
       }
       top++;
       stack[top]=element;
       printf("Data pushed to stack\n");
     }
     int pop()
     {
       if(top<0)
       {
	 printf("Stack is emptuy\n");
	 return INT_MIN;
       }
       return stack[top--];
       getch();
}
