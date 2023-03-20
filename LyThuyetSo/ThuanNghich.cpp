#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sothuannghich(ll n){	
	ll lat = 0;
	ll temp = n;
	while(n){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	if(lat == temp) return 1;
	else return 0;
}

int main(){
     int t;
     cin >> t;
     while(t--){
          ll n;
          cin >> n;
          if(sothuannghich(n)) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
     return 0;
}
