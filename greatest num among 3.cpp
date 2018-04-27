#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,large;
	printf("enter any three number by user:");
	scanf("%d%d%d",&a,&b,&c);
	large=a>b?(a>c?a:c):(b>c?b:c);
	printf("\nthe largest number is :%d",large);
	getch();
}
