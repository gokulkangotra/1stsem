#include <stdio.h>

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    return -1;
    int x = 20;
    int index = search(arr, n, x);
    if (index == -1) {
        printf("Element not found in array.\n");
    } else {
        printf("Element found at index %d.\n", index);
    }
    return 0;
}
