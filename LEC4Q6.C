#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("the value of x is : %d\n",x);
	printf("the value of y is : %d",y);
getch();
}