
#include<stdio.h>
#include<conio.h>
#define MAX 100

void main()
{
 int array[MAX];
 int n,i,j;
 clrscr();
 printf("How many numbers you want to enter:\n");
 scanf("%d",&n);
 printf("Enter the numbers:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&array[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n;j++)
  {
   if(array[i]>array[j])
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
   }
   printf("\nEntered series is:\n");
   for(i=0;i<n;i++)
   {

    printf("%d\t",array[i]);
   }
   getch();
  }
 }
}