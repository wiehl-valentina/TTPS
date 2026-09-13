#include <bits/stdc++.h>
using namespace std; 

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;

    int problems; 
    cin >> problems; 
    int a, b, c;
    int total = 0;  

    for (int i = 0; i < problems; i++) {
        cin >> a >> b >> c; 

        if (a+b+c >= 2)
            total++; 
    }

    cout << total; 
}
