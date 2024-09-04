class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
       int count =0;
        for(char c:s){
        if(c =='('){
            if(count>0){
                result+=c;
                      }
            count++;  // Increment the number of opened parentheses
        } else {
            count--;  // Decrement the number of opened parentheses
            // If opened is still greater than 0 after decrementing, it's not an outer ')', so add to result
            if (count > 0) {
                result += c;
            }
        }
    }
    
    return result;  // Return the result string after processing all characters

    }
};