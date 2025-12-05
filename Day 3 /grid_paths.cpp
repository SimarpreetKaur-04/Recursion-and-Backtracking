// Print all paths in a grid (Right & down moves only )

#include <bits/stdc++.h>
using namespace std;

void paths(int i, int j, int n, int m, string path) {
    if(i == n-1 && j == m-1) {
        cout << path << "\n";
        return;
    }

    // move right
    if(j + 1 < m) paths(i, j+1, n, m, path + "R");

    // move down
    if(i + 1 < n) paths(i+1, j, n, m, path + "D");
}

int main() {
    paths(0, 0, 2, 2, "");
}
