// https://neps.academy/br/exercise/496

#include <bits/stdc++.h>
using namespace std;


int main() {
    long long l, n, r;
    cin >> l >> n;


    r = (l - n + 1) * (l - n + 1) + (n - 1);


    cout << r;


    return 0;
}
