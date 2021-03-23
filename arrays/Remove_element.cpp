/* 27. Remove Element
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2]
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int position =0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] != val){
                nums[position] = nums[i];
                position += 1;
            }
        }
        return position;
        
    }
};