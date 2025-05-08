#include <stdio.h>

int main() {
    int n, i, count = 0;
    int arr[100];  // Adjust size as needed

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even elements
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    // Output the result
    printf("Total number of even elements: %d\n", count);

    return 0;
}
