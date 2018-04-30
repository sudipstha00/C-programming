#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("enter any character by the user:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	printf("The entered character is vowel");
	else
	{
		printf("The entered character is not vowel");
	}
	getch();
}
