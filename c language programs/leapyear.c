#include<stdio.h>
int main()
{
	int year;
	printf("enter the year=");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("::entered year is leap year::");
	}
	else if(year%100!=0)
	{
		printf("::entered year is leap year::");
	}
	else if(year%4==0)
	{
		printf("::entered year is leap year::");
	}
	else
	{
		printf("::entered year is not leap year::");
	}	
	return 0;
}
