#include <stdio.h>
#include <stdlib.h>

/* Calculate the mean of an integer array */
double mean(int arr[], int n) {
    if (n == 0) return 0.0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

/* Comparison function used by qsort */
int compare_ints(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

/* Calculate median — requires sorted list */
double median(int arr[], int n) {
    if (n == 0) return 0.0;

    qsort(arr, n, sizeof(int), compare_ints);

    if (n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        return arr[n/2];
}

/* Calculate the mode (handles ties by returning first highest-frequency value) */
int mode(int arr[], int n) {
    if (n == 0) return 0;

    int maxCount = 0, modeVal = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            modeVal = arr[i];
        }
    }
    return modeVal;
}

/* Demonstration */
int main() {
    int arr[] = {4, 2, 5, 2, 9, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mean: %.2f\n", mean(arr, n));
    printf("Median: %.2f\n", median(arr, n));
    printf("Mode: %d\n", mode(arr, n));

    return 0;
}