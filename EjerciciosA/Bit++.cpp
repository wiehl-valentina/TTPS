#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;

    int n, x = 0; 
    cin >> n; 
    string operation;

    for (int i = 0; i < n; i++) {
        cin >> operation;
        if (operation.find('+') != string::npos) 
            x++;
        else 
            x--; 
    }
    cout << x; 
    return 0; 
}