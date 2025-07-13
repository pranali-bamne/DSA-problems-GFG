// User function Template for C

int search(int arr[], int n, int x) {
    // Iterate over the array elements
    for (int i = 0; i < n; i++) {
        // Check if the current element is equal to 'x'
        if (arr[i] == x)
            return i; // Return the index if element is found
    }
    return -1; // Return -1 if element is not found
}