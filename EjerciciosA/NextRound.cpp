#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;

    int n, k; 
    cin >> n >> k; 
    int scores[n], count = 0; 

    for (int i = 0; i < n; i++) cin >> scores[i];   
    for (int i = 0; i < n; i++) count+= (scores[i] >= scores[k-1] && scores[i] > 0);

    cout << count; 
    return 0; 
}