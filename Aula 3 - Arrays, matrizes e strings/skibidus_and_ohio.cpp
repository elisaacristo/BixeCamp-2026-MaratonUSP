// https://codeforces.com/contest/2065/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> r(n);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool ok = false;

        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j] == s[j + 1]) {
                ok = true;
                break; 
            }
        }

        if (ok) r[i] = 1;
        else r[i] = s.size();
    }

    for (int i = 0; i < n; i++) {
        cout << r[i] << "\n";
    }

    return 0;
}