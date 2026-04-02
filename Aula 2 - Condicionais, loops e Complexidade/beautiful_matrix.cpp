// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;


int main() {
    int mat[4][4];
    int n, lin, col;


    for (int i=1; i<=5; i++){
        for (int j=1; j<=5; j++){
            cin >> n;
           
            if (n == 1){
                lin = i;
                col = j;
            }
        }
    }


    cout << abs(lin - 3) + abs(col - 3) << endl;


    return 0;
}
