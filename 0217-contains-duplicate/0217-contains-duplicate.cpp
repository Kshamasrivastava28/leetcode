/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
 
       int n = nums.size();
        int cnt=0;

    //Run a loop for selecting elements:
    for (int i = 0; i < n; i++) {

        //find the occurrence using linear search:
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                cnt++;
        }

        // if the occurrence is 1 return ans:
        if (cnt > 1) return true;
    }

    //This line will never execute
    //if the array contains a single element.
    return false;
} 
    
};*/
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
