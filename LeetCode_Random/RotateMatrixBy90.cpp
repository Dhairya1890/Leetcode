#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy(matrix.size(), vector<int>(matrix[0].size()));
        copy = matrix;
        int i = 0, k = matrix.size()-1, j = 0, l = 0;
        while(j < matrix[0].size() && k < matrix.size()){
            i = 0, l = 0;
            while(i < matrix.size() && l < matrix[0].size()){
                matrix[i][j] = copy[k][l];
                i++, l++;
            }
            j++, k--;
        }
    }
};

int main(){
    Solution s1;
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    s1.rotate(matrix);
    for(vector i : matrix){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}