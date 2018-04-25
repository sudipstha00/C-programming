#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("enter the three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
    {
        printf("The given triangle is equilateral");
    }
    else
    {
    printf("The given triangle is a different triangle");
    }
    getch();
}
