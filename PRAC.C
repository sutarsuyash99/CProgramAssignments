#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,n;

printf("enter the no. of lines");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("*");
		for(k=1;k<=2*n-1;k++){
			if(k<2*n-1){
				printf(" ");
			}
			else{
				printf("*");
			}
		}printf("\n");
	}

}
getch();
}