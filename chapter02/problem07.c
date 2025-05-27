// program that takes a dollar amount as an input and outputs the smallest number of bills needed 20, 10, 5, & 1
#include <stdio.h>

int main(void) {

    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount to determine what bills to use: ");
    scanf("%i", &amount);

    twenties = amount / 20;
    amount -= twenties * 20;
    tens = amount / 10;
    amount -= tens * 10;
    fives = amount / 5;
    amount -= fives * 5;
    ones = amount / 1;

    printf("$20 bills: %i\n$10 bills: %i\n$5 bills: %i\n$1 bills: %i\n", twenties, tens, fives, ones);

    return 0;
}