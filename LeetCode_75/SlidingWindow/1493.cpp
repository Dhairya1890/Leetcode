/*Longest subarray of 1s after deleting one element

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int n = nums.size();
      int maxLen = 0;
      
      int l = 0;
      int zeros = 0;

      for(int r = 0; r<n; r++){
        if(nums[r] == 0) zeros++;

        while(zeros > 1){
            if(nums[l] == 0) zeros--;
            l++;
        }
        maxLen = max(maxLen, r-l);
      }
      return maxLen;
    }
};

int main(){
    Solution s1;
    vector<int> nums;
    s1.longestSubarray(nums);
}