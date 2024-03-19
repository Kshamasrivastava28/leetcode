class Solution {
public:
    /*
    int singleNonDuplicate(vector<int>& nums) {
        
        int  n=nums.size();
        int  l=1;
        int r=n-2;
        int m=r+l/2;
        if(n==1)
            return nums[0];
            
        
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        
        while(l<=r){
            if(nums[m]!=nums[m+1]&&nums[m]!=nums[m-1]){
                return nums[m];
            }
            if(m%2==1 && nums[m]==nums[m-1] || m%2==0 && nums[m]==nums[m+1]){
                l=m+1;
            }
           else {
               r=m-1;
           }
        
        }
        return -1;
    }
};
*/
    int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); //size of the array.

    //Edge cases:
    if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if arr[mid] is the single element:
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        //we are in the left:
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            //eliminate the left half:
            low = mid + 1;
        }
        //we are in the right:
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }

    // dummy return statement:
    return -1;
}
} ;
