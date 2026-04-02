// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

#include <bits/stdc++.h>
using namespace std;


int paths(int cur, int E){
   if (cur == E) return 1;
   if (cur > E) return 0;


   return paths(cur + 1, E) + paths(cur + 2, E) + paths(cur + 3, E);
}


int main(){
   int S, E;
   cin >> S >> E;
   cout << paths(S, E);
}
