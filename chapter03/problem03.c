// split a 13 digit isbn into its named parts
#include <stdio.h>

int main(void){

    int gs1Prefix, grpID, pubCode, itemNum, checkDig;
    
    printf("Enter 13 Digit ISBN (w/ dashes): ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &grpID, &pubCode, &itemNum, &checkDig);

    printf("GS1 Prefix: %d\n", gs1Prefix);
    printf("Group Identifier: %d\n", grpID);
    printf("Publisher Code: %d\n", pubCode);
    printf("Item Number: %d\n", itemNum);
    printf("Check Digit: %d\n", checkDig);

    return 0;
}