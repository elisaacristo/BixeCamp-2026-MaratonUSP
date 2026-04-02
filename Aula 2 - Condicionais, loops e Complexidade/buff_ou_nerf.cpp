// https://neps.academy/br/exercise/902

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d, m, p;
    cin >> n >> d >> m >> p;


    n *= d;
    m *= p;


    if (n > m) cout << "NERF";
    else cout << "BUFF";
}
