/*class Solution {
private:
    void com(vector<int>& candidates, vector<int>& output, int target, int i, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(output);
            return;
        }
        if (target < 0 ){
            return;
        } 
        if( i == candidates.size()) {
            return;
        }
        for(int k=i;k<candidates.size();k++){
        if(k!=i && candidates[k]==candidates[k-1]){
            continue;
        }
        com(candidates, output, target, i + 1, ans);
        return; // Exclude current candidate
        }
        output.push_back(candidates[i]); // Include current candidate
         
        com(candidates, output, target - candidates[i], i+1, ans); // Recursive call with updated target
         output.pop_back();// Backtrack
    }
    
     public:
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(),candidates.end());
        com(candidates, output, target, 0, ans);
        return ans;
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
        
        for (int k = i; k < candidates.size(); k++) {
            // Skip duplicates
            if (k > i && candidates[k] == candidates[k - 1]) {
                continue;
            }
            
            output.push_back(candidates[k]); // Include current candidate
            com(candidates, output, target - candidates[k], k + 1, ans); // Recursive call with updated target and index
            output.pop_back(); // Backtrack
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(), candidates.end()); // Sort candidates to handle duplicates
        com(candidates, output, target, 0, ans);
        return ans;
    }
};
