/*class Solution {
    private:
    void com(vector<int>& candidates ,<vector<int>& output,int target,int i,<vector<vector<int>>& ans){
        if(target==0){
        ans.push_back(output);
        return;
        }
        if(target<0){
            return;
        }
        if(i==candidates.size()){
        return;
    }
    com(i+1,candidates,output,target,ans);
    ans.push_back(candidates[i]);
    com(i,candidates,output,target-candidates[i],ans);
    output.pop_back(candidates[i]);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        int ind=0;
        com(0,candidates,output,target,ans);
     return ans ;

    }
};
*/
 class Solution {
private:
    void com(vector<int>& candidates, vector<int>& output, int target, int i, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(output);
            return;
        }
        if (target < 0 || i == candidates.size()) {
            return;
        }
        com(candidates, output, target, i + 1, ans); // Exclude current candidate
        output.push_back(candidates[i]); // Include current candidate
        com(candidates, output, target - candidates[i], i, ans); // Recursive call with updated target
        output.pop_back(); // Backtrack
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        com(candidates, output, target, 0, ans);
        return ans;
    }
};
