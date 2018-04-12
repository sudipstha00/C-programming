#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c;
	float x1,x2;
	printf("enter the value of a b and c:");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/2/a;
	x2=(-b-sqrt(b*b-4*a*c))/2/a;
	printf("the value of quadrilateral is :%f,%f",x1,x2);
}
