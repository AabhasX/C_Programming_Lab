#include <stdio.h>

void swapValue(int a, int b);      
void swapReference(int *a, int *b); 

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    swapValue(x, y);
    printf("After swapValue: x = %d, y = %d (no change)\n", x, y);

    swapReference(&x, &y);
    printf("After swapReference: x = %d, y = %d (values swapped)\n", x, y);

    return 0;
}

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapValue: a = %d, b = %d\n", a, b);
}

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swapReference: a = %d, b = %d\n", *a, *b);
}