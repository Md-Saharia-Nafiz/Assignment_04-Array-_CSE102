
#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Search using linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element %d found at position %d (index %d).\n", search, i + 1, i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
