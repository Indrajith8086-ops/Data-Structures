/*Program to insert and add array elements*/
#include<stdio.h>
int main()
{
 int a[20], i,n, sum=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The entered elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }

 for(i=0;i<n;i++)
 {
  sum= sum+ a[i] ;
 }
  printf("The sum of array elements is :%d",sum);
}
 
 
