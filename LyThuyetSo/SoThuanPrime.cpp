// Số thuần số nguyên tố là số nguyên tố có tất cả các chữ số là số nguyên tố và tổng các chữ số là số NT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPrime(ll n){
     for (ll i = 2; i <= sqrt(n); i++){
          if(n % i == 0) return 0;
     }
     return n > 1;
}

int ChuSoNguyenTo(ll n){
     while(n){
          int res = n % 10;
          if(res != 2 && res != 3 && res != 5 && res != 7) return 0;
          // if(!isPrime(res)) return 0;
          // if(!(res == 2 || res == 3 || res == 5 || res == 7)) return 0;

          n /= 10;
     }
     return 1;
}

int SumofNumber(ll n){
     int sum = 0;
     while(n){
          sum += n % 10;
          n /= 10;
     }
     if(isPrime(sum)) return 1;
     else return 0;

     // return isPrime(sum);
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll n;
          cin >> n;
          if(isPrime(n) && ChuSoNguyenTo(n) && SumofNumber(n)) cout << "Yes" << endl;
          else cout << "No" << endl;
     }

     return 0;
}