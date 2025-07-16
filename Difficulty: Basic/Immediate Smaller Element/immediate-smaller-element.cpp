// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        // int n = arr.size();
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i + 1] < arr[i])
            {
                arr[i] = arr[i + 1];
            }
            else
            {
                arr[i] = -1;
            }
        }
        arr[arr.size() - 1] = -1;
        
    }
};