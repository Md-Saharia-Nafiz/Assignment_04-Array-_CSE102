#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int size1, size2, i, j;

    // Input size and elements of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);

    printf("Enter %d elements for the first array:\n", size1);
    for(i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size and elements of second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);

    printf("Enter %d elements for the second array:\n", size2);
    for(i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge the arrays
    for(i = 0; i < size1; i++) {
        c[i] = a[i];
    }

    for(j = 0; j < size2; j++) {
        c[i + j] = b[j];
    }

    // Print the merged array
    printf("Merged array:\n");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}

