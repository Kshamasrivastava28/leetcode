class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*int n=nums.size();
        int t;
       for(int i=0;i<=n;i++) {
           if(nums[i]==0){
               nums[i]=t;
           nums[i+1]=nums[i];
           nums[i+1]=t;
       }
    }
        
    }
    
};
*/ int i = 0; // Pointer to track the position to place the next non-zero element
        int n = nums.size();
        
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                // Swap non-zero element nums[j] with nums[i]
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};