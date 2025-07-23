class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        long long totalSum = (long long)n * (n + 1) / 2;  // cast to long long to avoid overflow
        long long sum = 0;

        for (int num : arr) {
            sum += num;
        }

        return (int)(totalSum - sum);  // final answer is still in int range
    }
};
