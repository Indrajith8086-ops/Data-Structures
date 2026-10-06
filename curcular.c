/*Circular queue using arrays*/
#include<stdio.h>
#define MAX 5
int queue[MAX];
 int front=-1,rear=-1;
int isFull()
{
 if((rear+1)%MAX== front)
 {
  return 1;
 }
 return 0;
}
 int isEmpty()
 {
  if (front==-1 && rear==-1)
  {
   return 1;
  }
   return 0;
 }
  
 void display()
 {
  int i;
  if(isEmpty())
  {
  printf("\n QUEUE is empty\n");
  return;
  }
   printf("\n QUEUE eleamnents:");
   i=front;
   do
   {
    printf("%d",queue[i]);
    i=(i+1)%MAX;
   }while(i!=((rear+1) % MAX));
  }
   
   void dequeue()
   {
    if(isEmpty())
    {
     printf("\nQUEUE IS EMPTY");
     return;
    }
     printf("\n %d is DELETED \n",queue[front]);
     if (front==rear)
     {
      front=rear=-1;
     }
     else
     {
      front=(front+1)%MAX;
     }
    }
    
    void insert()
    {
     int x;
     if(isFull())
     {
      printf("\nQUEUE is Full\n");
      return;
      }
      printf("Enter the elements to insert:");
      scanf("%d",&x);
      if(isEmpty())
      {
       front=rear=0;
      }
      else
      {
       rear=(rear+1)%MAX;
      }
       queue[rear]=x;
       printf("\n %d INSERTED",queue[rear]);
      }
      void search()
      {
       int key,i, found=0;
       if(isEmpty())
       {
        printf("Queue is empty");
        return;
       }
        printf("Enter the element to be searched :");
        scanf("%d",&key);
        i=front;
        do
        {
         if(queue[i]==key)
         {
          printf("Element  %d found at position %d\n", key , i);
          found=1;
          break;
         }
         i=(i+1)%MAX;
         }while(i!=(rear+1)%MAX);
         if(!found)
         {
          printf("Element %d is not found in the queue",key);
         }
         }
     int main()
     {
      int choice;
      do{
      printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&choice);
      
      switch(choice)
      {
       case 1: insert();
               break;
       case 2: dequeue();
               break;
       case 3: display();
               break;
       case 4: search();
               break;
       case 5: printf("Progrm finished");
               return 0;
       default: printf("\n Invalid choice \n");
      }
     }while(choice!=5);
      return 0;
     }
     
     
      
         
  
 
 
