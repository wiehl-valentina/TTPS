#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
const int MOD = 1e9 + 7; 

int main() {
    FIN;
    
    int n; 
    cin >> n; 

    vector<long long> tiradas(n+5, 0);
    tiradas[0] = 1; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0)
                tiradas[i] = (tiradas[i] + tiradas[i-j]) % MOD;
        }
    }
    
    cout << tiradas[n] << "\n";
    return 0;
}