#include <bits/stdc++.h>
using namespace std;

int countSubseq(int index, vector<int>& arr, int sum, int k) {
    if (index == arr.size()) {
        return sum == k ? 1 : 0;
    }

    // Pick
    int pick = countSubseq(index + 1, arr, sum + arr[index], k);

    // Not pick
    int notPick = countSubseq(index + 1, arr, sum, k);

    return pick + notPick;
}

int main() {
    vector<int> arr = {1, 2, 1};
    cout << countSubseq(0, arr, 0, 2);
}
