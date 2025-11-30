#include <stdio.h>

struct Student {
    char name[50];
    int m1, m2, m3;
};

void input(struct Student s[], int n);
void display(struct Student s[], int n);
void totalMarks(struct Student s[], int n);
void topper(struct Student s[], int n);

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    input(s, n);
    display(s, n);
    totalMarks(s, n);
    topper(s, n);

    return 0;
}

void input(struct Student s[], int n) {
    int i;
    printf("\nEnter student details:\n");
    for (i = 0; i < n; i++) {
        printf("\nName of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks in 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
    }
}

void display(struct Student s[], int n) {
    int i;
    printf("\n---- Student Details ----\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Marks: %d, %d, %d\n", s[i].m1, s[i].m2, s[i].m3);
    }
}

void totalMarks(struct Student s[], int n) {
    int i, total;
    printf("\n---- Total Marks ----\n");
    for (i = 0; i < n; i++) {
        total = s[i].m1 + s[i].m2 + s[i].m3;
        printf("%s : Total = %d\n", s[i].name, total);
    }
}

void topper(struct Student s[], int n) {
    int i, total, max = -1, index = 0;

    for (i = 0; i < n; i++) {
        total = s[i].m1 + s[i].m2 + s[i].m3;
        if (total > max) {
            max = total;
            index = i;
        }
    }

    printf("\n---- Topper ----\n");
    printf("Name: %s\n", s[index].name);
    printf("Total Marks: %d\n", max);
}