/*Lab 14
2D Array*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5][5],b[5][5],c[5][5];
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("A%d%d:",i+1,j+1);
	 		scanf("%d",&a[i][j]);
	 		
		}
	 }
	  for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("B%d%d:",i+1,j+1);
	 		scanf("%d",&b[i][j]);
	 		
		}
	 }
	  for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		c[i][j]=a[i][j]+b[i][j];
			 printf("C%d%d:%d\n",i+1,j+1,c[i][j]);
	 		
		}
	 }
	 getch();
	 
}
