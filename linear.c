/*Progrm to implement linear search*/
#include<stdio.h>
int main()
{
 int a[20],i,n,key,found=0;
 printf("Enter the limit:");
 scanf("%d", &n);
 printf("Enter the elements");
 for(i=0;i<n;i++)
 {
 scanf("%d", &a[i]);
 }
 printf("Enter the element to be searched:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(a[i]== key)
  {
   printf("Found at position %d", i+1);
   found=1;
  }
  
  }
  if(found == 0)
  {
  printf("Not found");
  
 }
 }
 
 
