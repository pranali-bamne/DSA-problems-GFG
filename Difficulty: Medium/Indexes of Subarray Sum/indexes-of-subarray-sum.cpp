class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int sum = 0;
        int start = 0;
        
        for(int end = 0; end < n; end++) {
            sum += arr[end];  // expand window
            
            // shrink window if sum exceeds target
            while(sum > target && start <= end) {
                sum -= arr[start];
                start++;
            }
            
            // check if we found target
            if(sum == target) {
                return {start + 1, end + 1};  // 1-based indexing
            }
        }
        
        return {-1};  // if no subarray found
    }
};
