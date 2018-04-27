#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	printf("\n%d is the greatest",c);
	getch();
}
