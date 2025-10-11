//wap to extract all the digits of the given number and print them
#include <stdio.h>
int main() 
{
    int n, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    printf("The digits are:\n");
    while (reversedNumber != 0) {
        remainder = reversedNumber % 10;
        printf("%d\n", remainder);
        reversedNumber /= 10;
    }

    return 0;
}