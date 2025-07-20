class Solution {
  public:
    void binSort(vector<int> &arr) {
        int count = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 0)
            {
               count++;  
            }
           
        }
        
        for(int i = 0; i < count; i++)
        {
            arr[i] = 0;
        }
        
        for(int i = count; i < arr.size(); i++)
        {
            arr[i] = 1;
        }
        
    }
};
