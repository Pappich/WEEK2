#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n,i,j;
	printf("Enter triangle size : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
