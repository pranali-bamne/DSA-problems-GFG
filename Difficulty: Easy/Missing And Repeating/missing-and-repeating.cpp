class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        long long sum_n = (long long)n * (n + 1) / 2;
        long long sum_sq_n = (long long)n * (n + 1) * (2 * n + 1) / 6;

        long long sum = 0, sum_sq = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
            sum_sq += (long long)arr[i] * arr[i];
        }

        long long diff = sum_n - sum;
        long long sq_diff = sum_sq_n - sum_sq;
        long long sum_xy = sq_diff / diff;

        int x = (diff + sum_xy) / 2;
        int y = x - diff;

        return {y, x};
    }
};
