// Print all subsets that sum to target. 


#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int>& arr, int target, int sum, vector<int>& path) {
    if(index == arr.size()) {
        if(sum == target) {
            for(int x : path) cout << x << " ";
            cout << "\n";
        }
        return;
    }

    // Take
    path.push_back(arr[index]);
    solve(index + 1, arr, target, sum + arr[index], path);
    path.pop_back();

    // Not take
    solve(index + 1, arr, target, sum, path);
}

int main(){
    vector<int> arr = {1,2,3};
    int target = 3;
    vector<int> path;
    solve(0, arr, target, 0, path);
}
