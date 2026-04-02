// https://neps.academy/br/exercise/236

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r;
    cin >> n;
    int v[n][n];
    int linha[n] = {0};
    int coluna[n] = {0};
    int diagonal1 = 0;
    int diagonal2 = 0;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> v[i][j];
        }
    } 

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            linha[i] += v[i][j];
            coluna[i] += v[j][i];
        }
        diagonal1 += v[i][i];
        diagonal2 += v[i][n-1-i];
    }

    if (diagonal1 != diagonal2){
        r = -1;
    }
    else{
        for (int i=0; i<n; i++){
            if (linha[i] == diagonal1) r = diagonal1;
            else{
                r = -1;
                break;
            }

            if (coluna[i] == diagonal1) r = diagonal1;
            else{
                r = -1;
                break;
            }
        }
    }

    cout << r;
}