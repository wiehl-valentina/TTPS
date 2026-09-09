#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    
    int n; 
    cin >> n; 

    vector<pair<int, int>> ñires; 
    int x, y; 
    int maxX = INT_MIN, minX = INT_MAX, maxY = INT_MIN, minY = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y; 
        
        maxX = max(maxX, x);
        minX = min(minX, x);
        maxY = max(maxY, y); 
        minY = min(minY, y);
    }
 
    int width = maxX - minX + 2; 
    int height = maxY - minY + 2; 

    cout << 2 * (width + height) << "\n";     
    return 0;
}