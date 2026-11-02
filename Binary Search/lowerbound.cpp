#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {2, 3, 7, 10, 11, 11, 25};
    int n = 7;
    int target = 11;

    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= target){
            ans = mid;

            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout<< ans;

}