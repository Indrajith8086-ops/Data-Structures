#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *link;
     };
struct node*top=NULL;
void push(){
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL){
printf("\n No space available\n");
return;
}
  newnode -> link = NULL;
  printf("\n Enter the element to insert\n");
  scanf("%d",&newnode-> data);
  if(top==NULL){
     top=newnode;
    }
 else
    {
     newnode-> link=top;
     top= newnode;
    }
     printf("\n%d INSERTED SUCCESSFULLY", newnode->data);
    }
    
    void pop(){
     struct node*temp= top;
     if(top == NULL){
         printf("\n STACK UNDERFLOW");
         return;
     }
      printf("\n %d is popped", temp->data);
      top= temp->link;
      free(temp);
      }
      
     void peek(){
       struct node*temp = top;
       if(top== NULL){
          printf("\n STACK UNDERFLOW");
          return;
       }
       printf("Top element is%d", temp->data);
      }
      
     void display(){
      struct node*temp = top;
      if(top==NULL){
           printf("\n NO ELEMENTS");
           return;
          }
          printf("\n Elements in stack are :\n ");
          while(temp!=NULL){
              printf("%d\n",temp->data);
              temp=temp->link;
            }
           }
           
         void search(){
              struct node *temp=top;
              int key,found=0;
              if(top==NULL){
                 printf("\nSTACK UNDERFLOW\n");
                 return;
               }
               printf("\n Enter the element to search\n");
               scanf("%d", &key);
               while(temp!=NULL){
                 if(temp->data==key){
                     printf("\n %d ELEMENT FOUNDED\n", temp->data);
                     found = 1;
                  }
                  temp = temp->link;
                }
                if(!found){
                    printf("\n ELEMENT NOT FPOUND");
                   }
                  }
               
               
              void main(){
                   int choice;
                  do{
                     printf("\n ****** STACK *******\n");
                     printf("\n 1-> PUSH() \n 2-> POP()\n 3-> PEEK()\n 4-> DISPLAY()\n 5-> SEARCH()\n 6-> EXIT");
                     printf("\n Enter the choice:\n");
                     scanf("%d",&choice);
                     
                     switch(choice){
                         case 1: push();
                                 break;
                         case 2: pop();
                                 break;
                         case 3: peek();
                                 break;
                         case 4: display();
                                 break;
                         case 5: search();
                                 break;
                         case 6: printf("\n Exiting the program\n");
                                 break;
                         default: printf("\n Invalid Choice\n");
                         }
                        } while(choice!=6);
                       } 
                  
               
     
