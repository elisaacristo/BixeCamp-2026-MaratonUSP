// https://neps.academy/br/exercise/52

#include <iostream>
using namespace std;


int main() {
    int n, aperta, a=0, b=0;
    cin >> n;


    for (int i=0; i<n; i++){
        cin >> aperta;


        if (aperta == 1 && a == 0) a = 1;
        else if (aperta == 1 && a == 1){
            a = 0;
        }
        else if (aperta == 2 && a == 0 && b == 0){
            a = 1; b = 1;
        }
        else if (aperta == 2 && a == 1 && b == 1){
            a = 0; b = 0;
        }
        else if (aperta == 2 && a == 1 && b == 0){
            a = 0; b = 1;
        }
        else{
            a = 1; b = 0;
        }
    }


    cout << a << "\n" << b;
}
