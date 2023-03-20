#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int isPerfect(ll n){
     ll res = 0, i = 1;
     while(i <= n / 2){
          if(n % i == 0) res += i;
          i++;
     }
     if(res == n) return 1;
     else return 0;
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll n;
          cin >> n;
          if(isPerfect(n)) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
     return 0;
}