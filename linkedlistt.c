/*Program to implement the singly linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
 struct node*head=NULL;
 
void insertFirst()
{
 struct node* newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("\n No space available\n");
  return;
 }
  newnode-> link=NULL;
  printf("\n Enter the value to insert to front\n");
  scanf("%d",&newnode->data);
  if(head==NULL)
  {
   head= newnode;
  }
   else
   {
    newnode-> link=head;
    head=newnode;
    }
     printf("\n Element inserted %d", newnode->data);
     }
     
   void insertLast(){
   struct node*temp= head,*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   
   if (newnode==NULL)
   {
    printf("\n No space available\n");
    return;
   }
    newnode-> link= NULL;
    printf("\n Enter the element to insert last:\n");
    scanf("%d", &newnode->data);
    if(head==NULL){
           head=newnode;
    }else{
          while(temp->link!=NULL){
          temp=temp->link;
    }
     temp -> link=newnode;
    }
    printf("element inserted successfully %d", newnode->data);
   }
   
   void insertLocation(){
   int key;
   struct node*temp=head,*newnode;
   newnode= (struct node*) malloc(sizeof(struct node));
   if(newnode==NULL){
   printf("\n No space available \n");
   return;
   }
   newnode -> link=NULL;
   if (head==NULL){
   printf("\n LIST empty\n");
   return;
   }
   printf("\n Enter the key after were you want to add element:");
   scanf("%d",&key);
   while(temp!=NULL && temp-> data!=key){
   temp=temp->link;
   }
    if(temp==NULL){
    printf("\n Value Not Exist\n");
    return;
   }
   printf("\n Enter the element to be inserted\n");
   scanf("%d",&newnode->data);
   newnode->link=temp->link;
   temp->link=newnode;
   printf("Value inserted successfully %d", newnode ->data);
  }
  void deleteFirst(){
         struct  node * temp = head;
         if(head== NULL){
               printf("\n LIST EMPTY \n");
               return;
            }
            head = temp -> link;
            printf("\n Value deleted %d\n", temp-> data);
            free(temp);
           }
           void deleteLast(){
                  struct node*temp= head,*prev = NULL ;
                  if (head== NULL)
                  {
                   printf("\n Empty list\n");
                   return;
                  }
                  if(temp-> link==NULL){
                  printf("\n value %d deleted \n",temp -> data);
                  head = NULL;
                  free(temp);
                  return;
                 }
                  while(temp->link !=NULL){
                  prev = temp;
                  temp= temp->link;
                  }
                  printf("\nvalue %d deleted\n", temp -> data);
                  prev -> link = NULL;
                  free(temp);
                 }
                  void deleteLocation(){
                        int key;
                        struct node *temp = head, *prev= NULL;
                        if(head==NULL){
                               printf("\n Empty List\n");
                               return;
                   }
                  printf("\n Enter the key that you want to dlelete \n");
                  scanf("%d",&key);
                  if(temp -> data== key){
                         head= temp ->link;
                         printf("\n value %d is deleted \n",temp ->data);
                         free(temp);
                         return;
                 }
                 while(temp!=NULL && temp -> data!= key){
                       prev= temp;
                       temp= temp->link;
                 }
                 if(temp==NULL){
                 printf("\n Value not Exist\n");
                 return;
                }
                 prev -> link= temp -> link;
                 printf("Value %d is deleted",temp-> data);
                 free(temp);
                }
                void search(){
                struct node*temp=head;
                int pos=0,found=0,val;
                if(head==NULL){
                       printf("\n The list is empty\n");
                       return;
                 }
                  printf("\n Enter the value to search:\n");
                  scanf("%d",&val);
                  while(temp!=NULL){
                        if(temp-> data==val){
                              printf("%d value found at location %d\n", temp-> data, pos+1);
                              found= 1;
                              }
                              pos++;
                              temp=temp->link;
                             }
                             if(!found){
                               printf("\n Value %d does not exist",val);
                               }
                              }
                              void display()
                              {
                               struct node*temp=head;
                               if(temp == NULL)
                               {
                                printf("\n The list is empty \n");
                                return;
                               }
                               printf("\n Elements in the list \n");
                               while(temp!=NULL){
                               printf("%d\n", temp->data);
                               temp= temp->link;
                              }
                             }
                             void main(){
                                    int choice;
                                    printf ("\n SINGLY LINKED LIST \n");
                                    do{
                                          printf("\n 1->INSERT FIRST\n 2-> InsertLast \n 3-> Insert Location \n 4-> Delete First \n 5-> Delete Last \n 6-> Delete Location \n 7-> Search \n 8->        Display\n 9->Exit \n");
                                    printf("Enter your Choice");
                                    scanf("%d", &choice);
                                    switch ( choice){
                                             case 1: insertFirst();
                                                     break;
                                             case 2: insertLast();
                                                     break;
                                             case 3: insertLocation();
                                                     break;
                                             case 4: deleteFirst();
                                                     break;
                                             case 5: deleteLast();
                                                     break;
                                             case 6: deleteLocation();
                                                     break;
                                             case 7: search();
                                                     break;
                                             case 8: display();
                                                     break;
                                             case 9: printf("\n Exiting the progrm \n");
                                                     exit(0);
                                            default: printf("\nInvalid Choice\n");
                                            }
                                          }while(choice!=9);
                                         }     
                 
