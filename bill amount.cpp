#include<stdio.h>
#include<conio.h>
main()
{0
	int n,amt;
	printf("Enter number of units:");
	scanf("%d",&n);
	if(n<=80)
	{
		amt=1000;
	}
	else if(n<=150)
	{
		amt=1000+((n-80)*15);
	}
	else
	{
		amt=1000+(70*15)+((n-150)*20);
	}
	printf("your bill amount is %d",amt);
	getch();
}
