#include <stdio.h>

#define MAX_SIZE 100

// Sorts the array using simple bubble sort
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

// Calculates mean (average) of the array
float calculate_mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return (float)sum / n;
}

// Calculates median after sorting the array
float calculate_median(int arr[], int n) {
    sort(arr, n);
    if (n % 2 == 1)
        return arr[n / 2];
    else
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}

// Calculates and prints the mode (most frequent element)
void calculate_mode(int arr[], int n) {
    int maxCount = 0;

    // First pass to find the highest frequency
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j)
            if (arr[i] == arr[j])
                count++;
        if (count > maxCount)
            maxCount = count;
    }

    // Second pass to find and print the value(s) with max frequency
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j)
            if (arr[i] == arr[j])
                count++;
        if (count == maxCount) {
            printf("%d\n", arr[i]);
            break; // Print only one mode for simplicity
        }
    }
}

int main() {
    int n, arr[MAX_SIZE];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Mean: %.2f\n", calculate_mean(arr, n));
    printf("Median: %.2f\n", calculate_median(arr, n));
    printf("Mode: ");
    calculate_mode(arr, n);

    return 0;
}