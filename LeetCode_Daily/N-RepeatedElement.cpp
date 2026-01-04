#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i : nums) freq[i]++;
        for(auto const& pair : freq){
            if(pair.second == n/2) return pair.first;
        }
        return 0;
    }
};