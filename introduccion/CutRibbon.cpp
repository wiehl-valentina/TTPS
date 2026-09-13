#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    
    int n, a, b, c; 
    cin >> n >> a >> b >> c; 
    int maxCuts = 0; 
    
    for (int x = 0; x <= n/a; x++) {
        int currCuts = 0;
        int z;  
        for (int y = 0; y <= n/b; y++) {
            int mod = n - (x*a + y*b);
            if (mod >= 0 && mod % c == 0) {
                z = mod / c; 
                currCuts = x + y + z; 
                if (currCuts > maxCuts) maxCuts = currCuts; 
            }
        }
    }
    cout << maxCuts << "\n";
    return 0;
}

