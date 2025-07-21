
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
            vector<int> result;
            int n = arr.size();
            int maxFromRight = arr[n - 1];
            result.push_back(maxFromRight);
            
            for(int i = n - 2; i >= 0; i-- )
            {
                if(arr[i] >= maxFromRight)
                {
                maxFromRight = arr[i];
                result.push_back(arr[i]);
                }
            }
            reverse(result.begin(), result.end());
            return result;
    }
};