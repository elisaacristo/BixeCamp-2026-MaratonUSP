// https://neps.academy/br/exercise/142

#include <bits/stdc++.h>
using namespace std;

int main() {
    double h, m;
    cin >> h >> m;

    h = h * 60;
    m = h + m;

    cout << m;

    return 0;
}
