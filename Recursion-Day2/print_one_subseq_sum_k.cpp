// print only one subsequence with sum = K

#include <bits/stdc++.h>
using namespace std;

bool printOne(int index, vector<int>& arr, vector<int>& ds, int sum, int k) {
    if (index == arr.size()) {
        if (sum == k) {
            for (int x : ds) cout << x << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    // pick
    ds.push_back(arr[index]);
    if (printOne(index + 1, arr, ds, sum + arr[index], k)) return true;

    // not pick
    ds.pop_back();
    if (printOne(index + 1, arr, ds, sum, k)) return true;

    return false;
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> ds;
    printOne(0, arr, ds, 0, 2);
}
