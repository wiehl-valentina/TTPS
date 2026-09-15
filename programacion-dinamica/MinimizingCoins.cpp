#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
const int MOD = 1e9 + 7;

int main() {
    FIN;
    
    int n, x; 
    cin >> n >> x; 

    vector<long long> coins(n+5, 0); 
    vector<long long> sums(x+5, 1e9);

    for (int i = 0; i < n; i++) cin >> coins[i]; 

    sums[0] = 0; 

    for (int i = 1; i <= x; i++)
        for (int j = 0; j < n; j++)
            if (i - coins[j] >= 0)
                sums[i] = min(sums[i], sums[i - coins[j]]+1);

    if (sums[x] == 1e9) cout << -1 << "\n";
    else cout << sums[x] << "\n"; 
    return 0;
}