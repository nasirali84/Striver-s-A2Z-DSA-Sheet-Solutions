#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int target = 4;
    int n = nums.size();
    int l;
    int left = 0, right = n-1;
    int ans = -1;

    while(left <= right){
        int mid = (left + right)/2;
        if(nums[mid] == target){
            ans =  mid;
            break;
        }else if(nums[mid] < target){
            left = mid +1;
        }else{
            right = mid -1;
        }
    }
    cout << ans;
    return 0;
}