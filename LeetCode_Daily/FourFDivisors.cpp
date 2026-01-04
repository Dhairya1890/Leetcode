#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAllDivisors(int n, int &sum){
        vector<int> res;
        for(int i = 1; i<=sqrt(n); i++){
            if(n%i == 0){
                res.push_back(i);
                if(n/i != i) {
                    res.push_back(n/i);
                    sum += i + n/i;
                } else sum += i;
            }
        }
        return res;
    }
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            vector<int> ans = getAllDivisors(nums[i], sum);
            if(ans.size() == 4) total += sum;
        }
        return total;
    }
};