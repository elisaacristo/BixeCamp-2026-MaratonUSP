// https://codeforces.com/gym/105272/problem/E

#include <bits/stdc++.h>
using namespace std;


int main(){
    int col, menorAlt, cava=0;
    cin >> col;
    int alt[col];


    for (int i=0; i<col; i++){
        cin >> alt[i];
    }


    menorAlt = alt[0];


    for (int i=0; i<col; i++){
        if (alt[i] <= menorAlt){
            menorAlt = alt[i];
        }
    }


    for (int i=0; i<col; i++){
        cava += alt[i] - menorAlt;
    }


    cout << cava;
}
