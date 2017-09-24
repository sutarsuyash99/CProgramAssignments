#include<stdio.h>
/*typedef struct node
{
 int data;
 node *next;
}node;

node *create()
{
 node *head,*p;
 head=(node *)malloc(sizeof(node));
 printf("Enter the first number:\n");
 scanf("%d",head->data);
 p=head;

} */
int fibo(int a,int n,int x)
{
 int f[8];
 f[0]=0;
 f[1]=1;
 f[2]=1;
 for(int p=3;p<8;p++)
 {
  f[p]=f[p-1]+f[p-2];

 }
 int os=-1;

}
int main()
{
 a[10]={1,3,5,6,7,8,34,56,67,78},n=10,x=67;
 int r;
 r=fibo(a,n,x);

 return 0;
}
