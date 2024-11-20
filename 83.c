#include <stdio.h>

int main() {
    int arr[5], i, max;
    
    for (i = 0; i < 5; i++) {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];  // Initialize max after reading the array elements

    for (i = 1; i < 5; i++) {  // Start loop from the second element
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value in the array is %d\n", max);

    return 0;
}

