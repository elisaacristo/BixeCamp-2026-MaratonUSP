// https://atcoder.jp/contests/abc395/tasks/abc395_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int lin = 1; lin <= N; lin++) {
        for (int col = 1; col <= N; col++) {

            int cima = lin;
            int baixo = N - lin + 1;
            int esq = col;
            int dir = N - col + 1;

            int camada = cima;
            if (baixo < camada) camada = baixo;
            if (esq < camada) camada = esq;
            if (dir < camada) camada = dir;

            if (camada % 2 == 1) cout << '#';
            else cout << '.';
        }
        cout << "\n";
    }
    return 0;
}