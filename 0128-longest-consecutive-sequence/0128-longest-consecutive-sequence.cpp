class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0) return 0;
       sort(nums.begin(),nums.end());
       int lastsmalest=INT_MIN;
       int longest=1;
       int count=0;
       int n=nums.size();
    
        for(int i=0;i<n;i++){
        if((nums[i]-1)==lastsmalest){
        count=count+1;
        
        lastsmalest=nums[i];
        }
         else if(lastsmalest!=nums[i]){
         count=1;
         lastsmalest=nums[i];
         }
         longest=max(longest,count);

        }
return longest;
    }
};
