#include<conio.h>
#include<stdio.h>
main()
{
  int a,b,c;
  printf("enter the three sides of triangle:");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b||a==c||b==c)
  {
    printf("the given triangle is isosceles");
    }
    else
    {
    printf("the given triangle is a different triangle");
    }
    getch();
}
