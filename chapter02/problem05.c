// takes an input and then outputs the computation of a polynomial using that input
#include <stdio.h>

int main(void) {

    int userinput, result;
    printf("Enter an integer: ");
    scanf("%i", &userinput);


    int x = userinput;
    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - (6);
    printf("%i\n", result);

    return 0;
}