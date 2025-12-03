#include <bits/stdc++.h>
using namespace std;

void printSubseq(int index, vector<int>& arr, vector<int>& ds) {
    if (index == arr.size()) {
        if (ds.size() == 0) {
            cout << "{}";
        } else {
            for (int x : ds) cout << x << " ";
        }
        cout << endl;
        return;
    }

    // Pick the element
    ds.push_back(arr[index]);
    printSubseq(index + 1, arr, ds);

    // Not pick
    ds.pop_back();
    printSubseq(index + 1, arr, ds);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ds;
    printSubseq(0, arr, ds);
}
