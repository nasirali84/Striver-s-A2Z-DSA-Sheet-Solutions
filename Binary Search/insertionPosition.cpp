#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 10, 11, 15};
    int target = 16;

    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            ans = mid;
            break;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans;
}