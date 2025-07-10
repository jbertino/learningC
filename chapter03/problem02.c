// output formatted product info that is entered by a user
// include item #, unit price, and purchase date in a table format with headings
#include <stdio.h>

int main(void){

    int itemNum, month, day, year;
    float price;
    
    printf(" Enter Item Number: ");
    scanf("%d", &itemNum);

    printf("Enter item price (dd.cc): ");
    scanf("%f", &price);

    printf("Enter pruchase date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item      Unit      Pruchase\n");
    printf("          Price     Date\n");
    printf("%-10d%-10.2f%d/%d/%d\n", itemNum, price, month, day, year);
}