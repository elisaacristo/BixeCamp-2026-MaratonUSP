// https://neps.academy/br/exercise/150

#include <iostream>
using namespace std;


int main() {
    int presen[3];
    int maior;


    for (int i=0; i<3; i++) cin >> presen[i];
    maior = presen[0];


    for (int i=0; i<3; i++){
        if (presen[i] > maior){
            maior = presen[i];
        }
    }


    cout << maior;
}
