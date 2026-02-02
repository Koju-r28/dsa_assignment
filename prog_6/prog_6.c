#include <stdio.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;

    if (largest != i) {
        int temp = arr[i]; arr[i] = arr[largest]; arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    printf("Max Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}