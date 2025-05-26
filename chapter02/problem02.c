// volume of a sphere with a set radius of 10.0f
#include <stdio.h>

#define PI 3.1415926535f

int main(void) {
    float radius = 10.0f;
    float volume = (4.0f/3.0f)*PI*radius*radius*radius;
    printf("%.10f\n", volume);

    return 0;
}