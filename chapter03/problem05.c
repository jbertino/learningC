// enter numbers 1-16 in any order and then display them in a 4x4 grid
#include <stdio.h>

int main(void){

    int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15;

    printf("Enter the numbers 1-16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15);

    printf("%3d%3d%3d%3d\n", num0, num1, num2, num3);
    printf("%3d%3d%3d%3d\n", num4, num5, num6, num7);
    printf("%3d%3d%3d%3d\n", num8, num9, num10, num11);
    printf("%3d%3d%3d%3d\n", num12, num13, num14, num15);

    printf("Row sums: %d %d %d %d\n", (num0+num1+num2+num3), (num4+num5+num6+num7), (num8+num9+num10+num11), (num12+num13+num14+num15));
    printf("Column sums: %d %d %d %d\n", (num0+num4+num8+num12), (num1+num5+num9+num13), (num2+num6+num10+num14), (num3+num7+num11+num15));
    printf("Diagonal sums: %d %d\n", (num0+num5+num10+num15), (num3+num3+num6+num12));

    return 0;
}