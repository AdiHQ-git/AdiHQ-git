#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float per;
    printf("enter the values: \n");
    scanf("%d %d %d %d %d",&a ,&b ,&c ,&d ,&e );
sum=a+b+c+d+e;
per=sum/5.0;
printf("total marks=%d\n",sum);
printf("percentage=%.2f\n",per);
return 0;
}