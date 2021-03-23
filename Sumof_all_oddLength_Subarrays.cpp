/* #1588. Sum of All Odd Length Subarrays

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58

*/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         // Stores the sum
         int sum = 0;
 
         // Size of array
         int n = arr.size();
 
            // Traverse the array
         for (int i = 0; i < n; i++) {
 
        // Generate all subarray of
        // odd length
            for (int j = i; j < n; j += 2) {
 
                for (int k = i; k <= j; k++) {
 
                     // Add the element to sum
                     sum += arr[k];
                }
            }
      }
 
    // Return the final sum
    return sum;
        
        
    }
};