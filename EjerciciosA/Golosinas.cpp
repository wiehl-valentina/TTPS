#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    
    int a, b, c; 
    cin >> a >> b >> c; 

    if ((a-b) % c == 0) cout << "S" << "\n";
    else cout << "N" << "\n"; 
    
    return 0;
}