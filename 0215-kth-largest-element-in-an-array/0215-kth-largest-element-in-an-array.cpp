class Solution {
public:


    int findKthLargest(vector<int>&nums, int k) {
    nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
	return nums[k-1];
    }
    
};


/*    
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        int s=s+1;
        int index=s;
        
        while(index>1)
        {
             int parent =index/2;
            if(nums[parent]<nums[index]){
            swap(nums[parent],nums[index]);
            index=parent;
            }
            else
            {
                for(int i=1;i<=s;i++)
                return nums[i];
            }
        }
    }
    return 
};
*/
        
        
        
    