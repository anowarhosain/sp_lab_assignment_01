#include <stdio.h>

int findMin(int arr[], int size) {
    if (size <= 0) {
        printf("Array size in invalid\n");
        return 0;
    }
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[] = {5, 4, 3, 6, 7,8,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minimum = findMin(arr, size);

    printf("Minimum value in the array: %d\n", minimum);

    return 0;
}

