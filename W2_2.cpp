#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter triangle size : ");
    scanf("%d",&n);
    a=(2*n)-1;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<a;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    return 0;    
} 
