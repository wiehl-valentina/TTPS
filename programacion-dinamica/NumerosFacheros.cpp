#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

const int MOD = 1e9 + 7;  

int main() {
    FIN;
    
    int k; 
    cin >> k; 

    vector<long long> prev(10, 0); 

    // establece el caso base
    prev[1] = 1; 
    prev[3] = 1; 
    prev[5] = 1; 
    prev[7] = 1;
    prev[9] = 1; 
    
    for (int i = 2; i <= k; i++) {
        vector<long long> curr(10, 0);

        curr[1] = prev[3];
        curr[3] = (prev[1] + prev[5]) % MOD; 
        curr[5] = (prev[3] + prev[7]) % MOD;
        curr[7] = (prev[5] + prev[9]) % MOD;
        curr[9] = prev[7]; 

        prev = curr; 
    }

    long long total = 0; 
    total = (total + prev[1]) % MOD;
    total = (total + prev[3]) % MOD;
    total = (total + prev[5]) % MOD;
    total = (total + prev[7]) % MOD; 
    total = (total + prev[9]) % MOD; 

    cout << total << "\n"; 
    return 0;
}