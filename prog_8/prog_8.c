#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int n, int *comp, int *swap) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++) {
            (*comp)++;
            if (a[j] > a[j+1]) {
                int t = a[j]; a[j] = a[j+1]; a[j+1] = t;
                (*swap)++;
            }
        }
}

void selectionSort(int a[], int n, int *comp, int *swap) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            (*comp)++;
            if (a[j] < a[min]) min = j;
        }
        if (min != i) {
            int t = a[i]; a[i] = a[min]; a[min] = t;
            (*swap)++;
        }
    }
}

void insertionSort(int a[], int n, int *comp, int *swap) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            (*comp)++;
            a[j+1] = a[j];
            (*swap)++;
            j--;
        }
        a[j+1] = key;
    }
}

int main() {
    int n, choice;
    printf("Enter N: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) a[i] = rand() % 1000 + 1;

    printf("\nBefore Sorting:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    printf("\nChoose Sorting Method:");
    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort");
    printf("Enter choice: ");
    scanf("%d", &choice);

    int comp = 0, swap = 0;

    switch (choice) {
        case 1: bubbleSort(a, n, &comp, &swap); break;
        case 2: selectionSort(a, n, &comp, &swap); break;
        case 3: insertionSort(a, n, &comp, &swap); break;
        default: printf("Invalid choice"); return 0;
    }

    printf("\nAfter Sorting:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    printf("Comparisons: %d, Swaps: %d", comp, swap);
    return 0;
}