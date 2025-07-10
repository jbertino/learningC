// accept date from user mm/dd/yyy and display it as yyyymmdd
#include <stdio.h>

int main(void) {

    int d,m,y;

    printf("Enter a date in the form mm/dd/yyyy: ");
    
    scanf("%d/%d/%d", &m, &d, &y);

    printf("You entered %d%.2d%.2d\n", y, m, d);

    return 0;
}