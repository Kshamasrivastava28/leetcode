class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        // apply binary search
        
        int low = 0;
        
        int high = n - 1;
        
        int idx = n;
        
        while(low <= high)
        {
            // find mid
            
            int mid = low + (high - low) / 2;
            
            // check the conditions and update the idx and move pointers accordingly
            
            if(nums[mid] >= target)
            {
                idx = mid;
                
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        return idx;
    }
};
