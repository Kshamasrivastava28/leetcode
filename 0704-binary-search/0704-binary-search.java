class Solution {
     public int search(int[] nums, int target) {
     int first = 0;
     int last = nums.length-1;
     int middle;
    while (first<= last){
      middle = first + (last-first)/ 2;
      if (nums[middle] == target)
          return middle;
    else  if (nums[middle] < target){
          first= middle + 1;
      }
      else 
          last = middle - 1;
    }
    return -1;
  }
}