#include <limits.h>

// Function to find the peak element index
int peakElement(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int left = (i == 0) ? INT_MIN : arr[i - 1];
        int right = (i == n - 1) ? INT_MIN : arr[i + 1];

        if (arr[i] > left && arr[i] > right) {
            return i; // Found a peak
        }
    }
    return -1;
}
