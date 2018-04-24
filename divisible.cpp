#include<stdio.h>
#include<conio.h>
main()
{
	int a,num;
	printf("Enter any number by user:");
	scanf("%d",&a);
	num=a%3;num=a/3;
	if(num==1)
	{
		printf("The given number is odd and divisible by 3");
	}
	else
	{
		printf("The given number is even");
	}
	getch();
}
