#include <stdio.h>
#include <math.h>

int main() {
float principal, rate, time;
float simple_interest, compound_interest;
    
    printf("Enter the principal, annual rate (%%), and time in years:\n");
    scanf("%f %f %f", &principal, &rate, &time);
    
    simple_interest = principal * rate * time / 100.0;
    compound_interest = principal * (pow(1.0 + rate / 100.0, time) - 1.0);
    
    printf("Simple interest: %f\n", simple_interest);
    printf("Compound interest (compounded annually): %f\n", compound_interest);
    
    return 0;
}