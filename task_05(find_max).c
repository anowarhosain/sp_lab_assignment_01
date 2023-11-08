#include <stdio.h>

int findMax(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty or has an invalid size.\n");
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {5, 4, 3, 6, 7,8,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximum = findMax(arr, size);
    printf("Maximum value in the array: %d\n", maximum);

    return 0;
}
