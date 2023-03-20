#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int isSquare(ll n){
     int res = sqrt(n);
     if(res * res == n) return 1;
     return 0;
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll n;
          if(isSquare(n)) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
     return 0;
}