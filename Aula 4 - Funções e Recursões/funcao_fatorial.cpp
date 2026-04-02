// https://neps.academy/br/exercise/174

#include <bits/stdc++.h>
using namespace std;


long long fatorial(int N){
   if (N == 0) return 1;


   for (int i=N-1; i>0; i--){
       N *= i;
   }
   return N;
}


int main(){
   int N;
   cin >> N;
   cout << fatorial(N);
}
