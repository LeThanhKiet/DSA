//Cac so co tong cac chu so bang 9 hay la 1 so may man thi la so may man
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void isLucky(){
     string s;
     cin >> s;
     ll sum = 0;
     for (int i = 0; i < s.length(); i++){
          sum += s[i] - '0';
     }
     if(sum == 9) cout << "Yes" << endl;
     else{
          while(sum >= 10){
               ll a = sum;
               sum = 0;
               while(a > 0){
                    sum += a % 10;
                    a /= 10;
               }
          }
          if(sum == 9) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
}

int main(){
     int t;
     cin >> t;
     while(t--) isLucky();
     return 0;
}