class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
         if(n < 2)
         {
             return{-1};
         }
         
         int first = INT_MAX;
         int second = INT_MAX;
         
         for(int i = 0; i < n; i++)
         {
             if(arr[i] < first)
             {
                 second = first;
                 first = arr[i];
             }
             else if(arr[i] > first && arr[i] < second)
             {
                 second = arr[i];
             }
         }
         if(second == INT_MAX)
         {
             return{-1};
         }
          return {first, second};
    }
};