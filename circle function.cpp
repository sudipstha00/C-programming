#include<stdio.h>
void circle(int r)
{
	 float a,d,c;
	d=2*r;
	a=3.14*r*r;
	c=2*3.14*r;
	printf("the diameter of circle is:%d",d);
	printf("\nthe area of circle is:%d",a);
	printf("\nthe circumference of circle is:%d",c);
}
main()
{
	int r;
	printf("enter the value of radius:");
	scanf("%d",&r);
	circle( r);
	return(0);
}

