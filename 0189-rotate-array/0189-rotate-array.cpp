class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        int temp=nums[0];
        int n=nums.size();
        for(int i=1;i<k;i++){
            nums[i-1]=nums[i];
        }
      nums[n-1]=temp;
        */
        int n = nums.size();
        k = k % n; // In case k is greater than n
        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        // Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};