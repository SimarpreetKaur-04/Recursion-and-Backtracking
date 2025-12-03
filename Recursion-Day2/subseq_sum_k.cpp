#include <bits/stdc++.h>
using namespace std;

void subseqSumK(int index, vector<int>& arr, vector<int>& ds, int sum, int k) {
    if (index == arr.size()) {
        if (sum == k) {
            for (int x : ds) cout << x << " ";
            cout << endl;
        }
        return;
    }

    // pick
    ds.push_back(arr[index]);
    subseqSumK(index + 1, arr, ds, sum + arr[index], k);

    // not pick
    ds.pop_back();
    subseqSumK(index + 1, arr, ds, sum, k);
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> ds;
    int k = 2;
    subseqSumK(0, arr, ds, 0, k);
}
