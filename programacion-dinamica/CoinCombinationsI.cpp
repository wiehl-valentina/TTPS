#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
const int MOD = 1e9 + 7;

int main() {
    FIN;
    
    int n, x; 
    cin >> n >> x; 

    vector<long long> coins(n+5, 0);
    vector<long long> combinations(x+5, 0);
    combinations[0] = 1; 

    for (int i = 0; i < n; i++) cin >> coins[i]; 

    for (int i = 1; i <= x; i++) 
        for (int j = 0; j < n; j++)
            if (i - coins[j] >= 0)
                combinations[i] = (combinations[i] + combinations[i-coins[j]]) % MOD; 
    
    cout << combinations[x] << "\n"; 
    return 0;
}