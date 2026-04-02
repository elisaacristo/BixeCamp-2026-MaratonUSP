// https://neps.academy/br/exercise/160

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, pontos=0;
    string gab;
    string chu;


    cin >> n >> gab >> chu;


    for (int i=0; i<n; i++){
        if (gab[i] == chu[i]){
            pontos++;
        }
    }
    cout << pontos;
}
