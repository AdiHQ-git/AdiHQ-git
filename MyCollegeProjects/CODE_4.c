#include<stdio.h>
int main() 
{
    char ch;
    float miles, kilometers;
    printf("Enter a character:\n ");
        printf("enter 'm' for miles to kilometers\n");
        printf("enter 'k' for kilometers to miles\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'm':
            { 
                printf("Enter the distance in miles:\n");
                scanf("%f", &miles);
                kilometers = miles * 1.609;
                printf("The distance in kilometers is %f\n", kilometers);
                break;
            }
        case 'k':
            { 
                printf("Enter the distance in kilometers:\n");
                scanf("%f", &kilometers);
                miles = kilometers * 0.621;
                printf("The distance in miles is %f\n", miles);
                break;
            }
        default:
            printf("Invalid input\n");
            return 1;
    }
    return 0;
}