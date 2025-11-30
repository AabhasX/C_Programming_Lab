#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p1, *p2;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p1 = (int*) malloc(n * sizeof(int));

    if (p1 == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    printf("\nUsing malloc(): Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &p1[i]);

    printf("Values stored using malloc(): ");
    for (i = 0; i < n; i++)
        printf("%d ", p1[i]);


    p2 = (int*) calloc(n, sizeof(int));

    if (p2 == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    printf("\n\nValues using calloc() (all initialized to 0): ");
    for (i = 0; i < n; i++)
        printf("%d ", p2[i]);


    p1 = (int*) realloc(p1, (n + 2) * sizeof(int));  
    if (p1 == NULL) {
        printf("Memory not reallocated!\n");
        return 0;
    }

    printf("\n\nUsing realloc():\n");
    printf("Enter 2 more values: ");
    for (i = n; i < n + 2; i++)
        scanf("%d", &p1[i]);

    printf("Values after realloc(): ");
    for (i = 0; i < n + 2; i++)
        printf("%d ", p1[i]);


    free(p1);
    free(p2);

    printf("\n\nMemory freed successfully.\n");

    return 0;
}