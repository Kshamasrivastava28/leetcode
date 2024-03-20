class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
          sort(nums.begin(),nums.end());
     int n=nums.size();
    
     int l=0;
     int r=n-1;
    while(r<=l){
        int x=1+(r-l)/2;
        if(nums[x]==target){
            return nums[x];
        }
        if(nums[x]<target){
            l=x+1;
        }
        if(nums[x]>target){
            r=x-1;
        }
    }
        return -1;
    }
};*/
        int n=nums.size();
         for (int i = 0; i < n; i++) {
        if (nums[i] == target)
            return i;
    }
    return -1;
}

    };