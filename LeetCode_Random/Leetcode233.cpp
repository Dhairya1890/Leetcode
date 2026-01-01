#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i<(int) nums.size(); i++){
            int prod1, prod2;
            if(i == 0){
                prod1 = accumulate(nums.begin() + 1, nums.end(),1, multiplies<int>());
                res.push_back(prod1);
            }
            else{
                prod1 = accumulate(nums.begin(), nums.end() - (nums.size() - i + 1) , 1, multiplies<int>());
                prod2 = accumulate(nums.begin() + (nums.size() - i + 1), nums.end(), 1, multiplies<int>());
                res.push_back(prod1*prod2);
            }
        }
        return res;
    }
};


int main(){
    Solution s1;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++) cin>>nums[i];
    vector<int> ans = s1.productExceptSelf(nums);
    for(int i : ans) cout<<i<<" ";
    return 0;
}