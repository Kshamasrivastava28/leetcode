class Solution {
private:
bool isPallin(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
 void solve(string s, vector<string>& output, int start, vector<vector<string>>& ans) {
        if(start==s.size()){
            ans.push_back(output);
            return;
        }
    for(int k=start;k<s.size();k++){
        if(isPallin(s,start,k)){
            output.push_back(s.substr(start,k-start+1));
            solve(s,output,k+1,ans);
            output.pop_back();
        }
    }
    
    }
    public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>>ans;
        vector<string>output;
        int i=0;
        solve(s,output,i,ans);
        return ans ;
        }
    };
 