#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int eng,soc,sci,nep,com,math,popn;
	float perct,average,total;
	printf("enter the marks of seven subjects:");
	scanf("%d%d%d%d%d%d%d",&eng,&soc,&sci,&nep,&com,&math,&popn);
	total=eng+soc+sci+nep+com+math+popn;
	average=total/7;
	perct=(total/700)*100;
	printf("\nTotal marks obtained is:%d",total);
	printf("\nAverage marks is:%f",average);
	printf("\nPercentage obtained is:%f%%",perct);
	getch();
}

	
