#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int isPrime(ll n){
     for (ll i = 2; i <= sqrt(n); i++){
          if(n % i == 0) return 0;
     }
     return n > 1;
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll n;
          cin >> n;
          if(isPrime(n)) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
     return 0;
}