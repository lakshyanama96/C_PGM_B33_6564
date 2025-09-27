//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid triangle: Sides must be positive.\n");
    } else if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        

        if (side1 == side2 && side2 == side3) {
            printf("The triangle is equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("Invalid triangle: The sum of any two sides must be greater than the third.\n");
    }

    return 0;
}