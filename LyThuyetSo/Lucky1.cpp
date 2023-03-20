//Cac so co duoi la 68 se la so may man cua Kiet 

#include <bits/stdc++.h>
using namespace std;

void isLucky(){
    string s;
    cin >> s;
    int l = s.length();
    if (s[l - 1] - '0' == 6 && s[l - 2] - '0' == 8)
        cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
     int t;
     cin >> t;
     while(t--) isLucky();
     return 0;
}