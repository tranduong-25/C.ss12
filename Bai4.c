#include <stdio.h>

int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 25, 3, 18, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = timMax(arr, n);
    printf("Số lớn nhất trong mảng là: %d\n", max);

    return 0;
}
