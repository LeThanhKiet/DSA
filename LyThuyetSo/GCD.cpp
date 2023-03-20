#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd1(ll a, ll b){
     ll min = a < b ? a : b;
     for (ll i = min; i > 0; i--){
          if(a % i == 0 && b % i == 0) return i;
     }
}

ll gcd2(ll a, ll b){
     while(b){
          ll du = a % b;
          a = b;
          b = du;
     }

     return a;
}

ll gcd3(ll a, ll b){
     if(b == 0) return a;
     return gcd3(a, a % b);
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll a, b;
          cin >> a >> b;
          cout << gcd1(a, b) << " " << gcd2(a, b) << " " << gcd3(a, b) << endl;
     }
     return 0;
}