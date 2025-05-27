// takes an input and then outputs the computation of a polynomial using that input
#include <stdio.h>

int main(void) {

    int userinput, result;
    printf("Enter an integer: ");
    scanf("%i", &userinput);


    int x = userinput;
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%i\n", result);

    return 0;
}