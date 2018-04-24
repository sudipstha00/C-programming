#include<conio.h>
#include<stdio.h>
main()
{
	int a,num;
	printf("enter any number by user:");
	scanf("%d",&a);
	num=a%2;
	if(num==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
	getch();
}

