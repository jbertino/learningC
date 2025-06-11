// program that calculates the remaining balance on a loan after the first three monthly payments
#include <stdio.h>

int main(void) {

    double loanAmount, interestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%lf", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%lf", &monthlyPayment);

    double apr = interestRate / 100 / 12;
    double currentBalance = loanAmount;

    currentBalance = (currentBalance + (currentBalance * apr)) - monthlyPayment;
    printf("Balance remaining after first payment: $%.2lf\n", currentBalance);
    currentBalance = (currentBalance + (currentBalance * apr)) - monthlyPayment;
    printf("Balance remaining after second payment: $%.2lf\n", currentBalance);
    currentBalance = (currentBalance + (currentBalance * apr)) - monthlyPayment;
    printf("Balance remaining after third payment: $%.2lf\n", currentBalance);
}