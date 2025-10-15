//find maximum of n numbers using loop
#include <stdio.h>
int main() {
    int n, i;
    float num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%f", &num);
    max = num;

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %.2f\n", max);
    return 0;
}