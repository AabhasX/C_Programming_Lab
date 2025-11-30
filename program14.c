#include <stdio.h>

union Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    union Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Name stored: %s\n", s.name);

    printf("\nEnter roll number: ");
    scanf("%d", &s.roll);
    printf("Roll stored: %d\n", s.roll);

    printf("\nEnter marks: ");
    scanf("%f", &s.marks);
    printf("Marks stored: %.2f\n", s.marks);

    printf("\nNote: In union, only last stored value is valid.\n");

    return 0;
}