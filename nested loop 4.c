/*Lab 11
Nested Loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,sum;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        sum=0;
		for(j=1;j<=i;j++)
		{
            sum=sum+j;
			printf("%d\t",sum);
		}
		printf("\n");
	}
	getch();
}
