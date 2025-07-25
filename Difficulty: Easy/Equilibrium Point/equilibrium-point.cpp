class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0;
        for (int num : arr)
            totalSum += num;

        int leftSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            int rightSum = totalSum - leftSum - arr[i];  // exclude current element

            if (leftSum == rightSum) {
                return i;  // use i + 1 if 1-based indexing required
            }

            leftSum += arr[i];
        }

        return -1;
    }
};  
