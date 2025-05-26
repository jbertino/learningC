// output the cost of something with 5% tax based user input
#include <stdio.h>

#define TAX 0.05f

int main(void) {

    float cost;
    
    printf("Enter the price of the items in dollars and cents: ");
    scanf("%f", &cost);
    
    printf("The cost with 5%% tax is: $%.2f\n", (cost + cost * TAX));

    return 0;
}