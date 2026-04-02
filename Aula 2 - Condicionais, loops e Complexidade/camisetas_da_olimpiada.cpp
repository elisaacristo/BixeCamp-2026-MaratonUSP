// https://neps.academy/br/exercise/980

#include <bits/stdc++.h>
using namespace std;


int main(){
    int prem, tam, tamP=0, tamM=0, numP, numM, i=0;
    cin >> prem;


    while (i < prem){
        cin >> tam;


        if (tam == 1) tamP++;
        else tamM++;


        i++;
    }


    cin >> numP >> numM;


    if ((numP >= tamP) && (numM >= tamM)) cout << "S";
    else cout << "N";


    return 0;
}
