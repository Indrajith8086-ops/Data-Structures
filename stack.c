#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
 if(top== MAX-1)
 {
  printf("Stack overflow!!!");
  return;
 }
 stack[++top]=item;
 printf("\n %d pushed to the stock", item);
 }
void pop()
{
 if (top==-1)
 {
  printf("\n Stack underflow");
  return;
 }
  printf("\n %d popped from stack", stack[top--]);
 }
  void peek()
  {
   if(top==-1)
   {
    printf("Stack is empty");
    return;
   }
    printf("\n top element is %d",stack[top]);
   }
   void display()
   {
    if(top==-1)
    {
     printf("\n Stack is empty");
     return;
    }
    printf("\n Stack elements are:");
    for(int i=top;i>=0;i--)
    {
     printf("%d",stack[i]);
    }
   }
    int main()
    {
    int choice, value;
    while(1)
    {
     printf("\n\n Stack operations MEnu:");
     printf("\n1.push");
     printf("\n2.pop");
     printf("\n3.peek");
     printf("\n4.display");
     printf("\n5.Exit");
     printf("\n Enter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
      case 1:
         printf("\n Enter value to push");
         scanf("%d",&value);
         push(value);
         break;
      case 2:
         pop();
         break;
      case 3: 
         peek();
         break;
      case 4:
         display();
         break;
      case 5:
         printf("\n Exiting program:");
         return 0;
      default:
         printf("\n invalid choice");
     }
    }
   }

