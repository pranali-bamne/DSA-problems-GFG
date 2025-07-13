#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;

        // Count frequency of each element in a[]
        for (int num : a) {
            freq[num]++;
        }

        // Check if each element in b[] exists in a[] with enough frequency
        for (int num : b) {
            if (freq[num] > 0) {
                freq[num]--;
            } else {
                return false; // Element not found or used up
            }
        }

        return true;
    }
};
