class Solution {
public:
    vector<int> runningSum(vector<int> nums) {
        vector<int> res(nums.size()); //declaring new arr of input arraysize
    if(nums.size()==0) //if input array size is zero return 0
        return res;

    res[0]=nums[0];
    for(int i=1;i<nums.size();i++)  //add th numbers iteratively starting from 0th index untill its index
    {
        res[i]=res[i-1]+ nums[i];
    }

    return res;  //return  summed array
        
    }
};