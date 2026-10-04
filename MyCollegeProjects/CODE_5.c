#include<stdio.h>
int main()
{
 char ch;
 printf("Enter '+' for addition: ");
 printf("Enter '-' for subtraction: ");
 printf("Enter '*' for multiplication: ");
 printf("Enter '/' for division: ");    
printf("Enter '%%' for modulus: ");
 scanf(" %c", &ch);
switch(ch)
{
    case '+':
        {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a + b);
            break;
        }
    case '-':
        {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a - b);
            break;
        }
    case '*':
        {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a * b);
            break;
        }
    case '/':
        {
            float a, b;
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        }
    case '%':
        {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            if(b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Division by zero\n");
            break;
        }
    default:
        printf("Invalid operator\n");
    }
  return 0;  
}