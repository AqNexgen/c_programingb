#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("factorial of number;%d",fact);
}
