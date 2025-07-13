class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
      int oddCount = 0;
      int evenCount = 0;
      
      for(int i = 0; i < arr.size(); i++)
      {
          if(arr[i] % 2 == 0)
          {
              evenCount++;
          }
          else
          {
              oddCount++;
          }
      }
    return{oddCount, evenCount};
    }
};