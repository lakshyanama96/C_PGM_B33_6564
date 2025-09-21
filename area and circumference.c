#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    float area, circmumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    circmumference = 2 * 3.14 * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circmumference);
    return 0;
}