#include <stdio.h>

struct Student {
    char name[50];
    int m1, m2, m3;   
    int total;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    printf("\n------ Student Marks Summary ------\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Marks: %d, %d, %d\n", s[i].m1, s[i].m2, s[i].m3);
        printf("Total Marks = %d\n", s[i].total);
    }

    return 0;
}