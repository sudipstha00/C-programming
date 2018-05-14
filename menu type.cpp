#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,d;
	char c;
	printf("\n1.check odd or even");
	printf("\n2.check alphabet");
	printf("\n3.check vowel");
	printf("\n4.check if divisible by 5&11");
	printf("\n5.exit");
	printf("\nEnter your choice:");
	scanf("%d",&a);
	switch(a)
	{
		case1:
			printf("\nenter any number");
			scanf("%d",&b);
			if(b%2==0)
			{
				printf("The entered number is even");
			}
			else
			{
				printf("The entered number is odd");
			}
			break;	
		case2:
		printf("\nenter any value from the user");	
		scanf("%c",&c);
		if(c>='a'||c>='A'&&c<='Z')
		{
		
		printf("The given value is character");
		}
		else
		{
			printf("The given value is not character");
		}
		break;
		case3:
			printf("\nenter any character :");
			scanf("%c",&c);
			if(c=='a'||c=='e''||c=='i'||c=='o'||c=='u')
			{
				printf("\nThe entered character is vowel");
			}
			else
			{
				printf("\nThe entered character is not vowel");
			}
			break;
			case4:
				printf("\nenter any number:");
				scanf("%d",&d);
				if(d%5==0&&d%11==0)
				{
					printf("\nThe entered number is divisible by 5 and 11");
				}
				else
				{
					printf("\nThe entered number is not divisible by 5 and 11");
				}
				break;
				case5:
					exit(1);
			
	}
	getch();
}
