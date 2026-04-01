// https://br.spoj.com/problems/PEDAGIO1/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int l, d, k, p, np, tot;
    cin >> l >> d >> k >> p;
 
    k *= l;
    np = l / d;
    p *= np;
    tot = k + p;
 
    cout << tot;
 
    return 0;
}
