class Solution {
    private:
    void s(vector<int>& nums,int start,vector<vector<int>>& permutations){
        if(start== nums.size()){
            permutations.push_back(nums);
        return;
        }
    for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]); // Swap the current element with nums[start]
            s(nums, start + 1, permutations); // Recur for the next index
            swap(nums[start], nums[i]); // Backtrack: restore the original order
        }
    }
    

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        s(nums, 0, permutations);
        return permutations;
    }
};

        
        
