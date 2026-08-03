/*Determine if two strings are close


Intuition - Only find when we cannot make the two strings equal

check unique characters from both
check freqs set of both
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> f1, f2;
        vector<int> s1(26,0), s2(26, 0);

        for(char c : word1){
            f1[c]++;
            s1[c-'a']++;
        }
        for(char c : word2){
            f2[c]++;
            s2[c-'a']++;
        }

        for(auto const& it : f1){
            if(f2.find(f1.first) == f2.end()) return false;
        }
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i = 0; i<26; i++){
            if(s1[i] != s2[i]) return false;
        }
        return true;
    }
};

int main(){
    Solution s1;
    string word1, word2;
    s1.closeStrings(word1, word2);
}