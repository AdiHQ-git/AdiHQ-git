#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}