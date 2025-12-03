// check if any subsequence with sum = k exists

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int index, vector<int>& arr, int sum, int k) {
    if (sum > k) return false; // small pruning
    if (index == arr.size()) return sum == k;

    // pick
    if (isPossible(index + 1, arr, sum + arr[index], k)) return true;

    // not pick
    if (isPossible(index + 1, arr, sum, k)) return true;

    return false;
}

int main() {
    vector<int> arr = {1, 2, 1};
    cout << (isPossible(0, arr, 0, 2) ? "YES" : "NO");
}

