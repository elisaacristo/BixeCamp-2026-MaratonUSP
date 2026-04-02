// https://neps.academy/br/exercise/247

#include <bits/stdc++.h>
using namespace std;


/*
função: tipo nome(tipo parametro1, tipo parametro2,...){
   retunr saida;
}


ex:
float soma(float a, float b){
   return a+b;
}


void hi(){
   cout << "Hi :)\n";
}
*/


bool eh_primo(int x){
   if (x <= 1) return false;
   else if (x == 2) return true;
   else if (x % 2 == 0) return false;
   else{
       for (int i=3; i<x; i+=2){
           if (x % i == 0) return false;
       }
   }
   return true;
}


int main(){
   int x;


   cin>>x;


   if(eh_primo(x)){
       cout << "S" << "\n";
   }else{
       cout << "N" << "\n";
   }
}
