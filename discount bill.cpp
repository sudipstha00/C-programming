#include<stdio.h>
#include<conio.h>
int main()
{
	float t,d;
	printf("\t\t\tStationary Shop");
	printf("\nEnter the total purchased amount:");
	scanf("%f",&t);
	if(t<5000)
	{
		d=t-((5.0/100)*5000);
		printf("Total purchase:%f",t);
		printf("\nDiscounted amount:%f",d);
	}
	else
	{
		d=t-((10.0/100)*5000);
		printf("Total purchase:%f",t);
		printf("\nDiscounted amount:%f",d);
	}
	getch();
}
