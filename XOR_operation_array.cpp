/*1486. XOR Operation in an Array
Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
*/

class Solution {
public:
    // time complexity:O(n)
    // space complexity:O(1)
    int xorOperation(int n, int start) {
        int x = 0;
        for(int i = 0;i<n;i++){
                //cout<<"before "<<x<<" " ;
                x = x^(start+2*i);
                //cout<<"after"<<x<<" " ;
                
        }
        return x;
    }
};