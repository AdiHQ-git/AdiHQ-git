#include<stdio.h>
int main()
{
    int i=1,n,product=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i;
    }
    printf("The factorial of %d is %d",n,product);
    return 0;
}