//#26. Remove Duplicates from Sorted Array
/* Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2)   //if input array size is 0 or 1 return size itself
            return nums.size();
        int j = 0;
        for(int i=1;i<nums.size();i++){  //if numbers are same skip else increment j and assign arr[i] to arr [j]
            if(nums[i] != nums[j]){
                j+=1;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }

int main()
{
	vector<int> nums;
	int a;

	for (int i = 1; i <= 5; i++){
		cin>>a;
		nums.push_back(a);
	}

	removeDuplicates(nums);
	cout << "after removing duplicates: ";
	for (auto i = nums.begin(); i != nums.end(); ++i)
		cout << *i << " ";

	return 0;
}
