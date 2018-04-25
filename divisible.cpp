#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter any number by user:");
	scanf("%d",&a);
	if(a%2==1&&a%3==0)
	{
		printf("The given number is odd and divisible by 3");
	}
	else
	{
		printf("The given number is either even or not divisible by 3");
	}
	getch();
}
