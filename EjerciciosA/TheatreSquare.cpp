#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0); 

int main() {
    FIN; 
    
    long long n, m, a;
    cin >> n >> m >> a;
    
    cout << ((n+a-1)/a) * ((m+a-1)/a);
}