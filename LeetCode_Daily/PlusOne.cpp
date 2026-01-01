#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> PlusOne(vector<int> &digits){
        int n = digits.size();
        for(int i = 0; i<n; i++){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};