// volume of a sphere based on the radius being input
#include <stdio.h>

#define PI 3.1415926535f

int main(void) {

    float radius;
    printf("Enter the radius of a sphere to caluclate the volume: ");
    scanf("%f", &radius);
    float volume = (4.0f/3.0f)*PI*radius*radius*radius;
    printf("%.10f\n", volume);

    return 0;
}