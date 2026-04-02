// https://atcoder.jp/contests/abc395/tasks/abc395_a

#include <bits/stdc++.h>
using namespace std;


int main(){
   int n;
   cin >> n;
   int a[n];
   string r;


   for (int i=0; i<n; i++){
       cin >> a[i];
   }


   for (int i=0; i<n-1; i++){
       if (a[i] < a[i+1]) r = "Yes";
       else if (a[i] == a[i+1]){
           r = "No";
           break;
       }
       else{
           r = "No";
           break;
       }
   }


   cout << r;
}
