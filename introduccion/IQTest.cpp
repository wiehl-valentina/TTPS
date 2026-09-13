#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    int n;
    cin >> n; 

    int evenCount = 0, oddCount = 0; 
    int evenIndex, oddIndex; 
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x; 

        if (x%2 == 0) {
            evenCount++;
            evenIndex = i; 
        } 
        else {
            oddCount++;
            oddIndex = i; 
        }
    }
    (oddCount < evenCount) ? (cout << oddIndex+1 << '\n') : (cout << evenIndex+1 << '\n');
}