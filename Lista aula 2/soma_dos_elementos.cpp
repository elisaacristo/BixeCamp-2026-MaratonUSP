// https://neps.academy/br/exercise/159

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, soma=0, valor;
    cin >> n;


    for (int i=0; i<n; i++){
        cin >> valor;
        soma += valor;
    }
   
    cout << soma;


    return 0;
}
