/*Program to enter array elements and display odd and even ones differently*/
#include<stdio.h>
int main()
{
 int a[20], i, n;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the array elements;");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The even numbers are:\n");
 for(i=0;i<n;i++)
 {
 if(a[i]%2 == 0)
 {
 printf("%d\t", a[i]);
 }
}
 printf("The odd numbers are:");
 for(i=0;i<n;i++)
 {
  if(a[i]%2 != 0)
  {
   printf("%d\t", a[i]);
  }
 }
 }
 
  
  
    
 
