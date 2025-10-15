//calculate area and perimeter of circle,square and rectangle based on users choice
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    int choice;
    float area, perimeter, radius, side, length, width;

    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            perimeter = 2 * PI * radius;
            break;
        case 2: 
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            break;
        case 3: 
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            perimeter = 2 * (length + width);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}