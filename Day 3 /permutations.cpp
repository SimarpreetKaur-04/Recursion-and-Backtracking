// Print all permutations of a string .


#include <bits/stdc++.h>
using namespace std;

void permute(int index, string &s) {
    if(index == s.size()) {
        cout << s << "\n";
        return;
    }

    for(int i = index; i < s.size(); i++) {
        swap(s[i], s[index]);      
        permute(index + 1, s);     
        swap(s[i], s[index]);      // backtrack
    }
}

int main() {
    string s = "abc";
    permute(0, s);
}

