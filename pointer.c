#include<stdio.h>
void main()
{
	int a[3][3],*b,i,j;
	b=&a[0][0];
	printf("enter the elements:");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 scanf("%d",*(b+((2*i)+j)));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",*(b+((2*i)+j)));
		}
	}
}
