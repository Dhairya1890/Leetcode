#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool search(vector<int> &nums, int l, int h, int size, int target){
        while(l <= h){
            int mid = l + (h-l)/2;

            if(nums[mid] == target) return true;

            if(nums[l] <= nums[mid]){
                if(nums[mid] > target) h = mid-1;
                else l = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[h]){
                    l = mid + 1;
                }
                else  h = mid - 1;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++) cin>>nums[i];
    int target;
    cin>>target;

    Solution s1;
    (s1.search(nums, 0, n-1, n, target) ? cout<<"YES" : cout<<"NO");
}