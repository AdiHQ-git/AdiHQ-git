// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <math.h>

int main(void)
{
int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;
    
    printf("Enter the principal, annual rate (%%), and time in years: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (principal < 0 || rate < 0 || time < 0) {
        printf("Principal, rate, and time must not be negative.\n");
        return 1;
    }

    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    simple_interest = principal * rate * time / 100.0;
    compound_interest = principal * (pow(1.0 + rate / 100.0, time) - 1.0);
    
    printf("Simple interest: %.2f\n", simple_interest);
    printf("Compound interest (compounded annually): %.2f\n", compound_interest);
    
    return 0;
}