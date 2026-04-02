// https://neps.academy/br/exercise/471

#include <iostream>
using namespace std;


int main() {
    int j, p, v, e, d;
    cin >> j >> p >> v >> e >> d;


    for (int V = 0; V <= 100; V++) {
        for (int E = 0; E <= 100; E++) {
            for (int D = 0; D <= 100; D++) {


                int J = V + E + D;
                int P = 3 * V + E;


                if ((j == -1 || j == J) &&
                    (p == -1 || p == P) &&
                    (v == -1 || v == V) &&
                    (e == -1 || e == E) &&
                    (d == -1 || d == D)) {


                    cout << J << " " << P << " " << V << " " << E << " " << D << endl;
                    return 0;
                }
            }
        }
    }
}
