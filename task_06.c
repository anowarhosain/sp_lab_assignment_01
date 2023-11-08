#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {5, 2, 7, 3, 7, 1, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int occurrences = countOccurrences(arr, size, target);
    printf("The integer %d appears %d times in the array.\n", target, occurrences);
    return 0;
}
