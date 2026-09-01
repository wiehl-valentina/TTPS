#include <bits/stdc++.h> 

using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0); 

int main() {
    FIN; // usa la definición que se hizo más arriba

    int weight;
    cin >> weight;

    if (weight % 2 == 0 and weight > 2) {
        cout << "YES\n"; 
    } else {
        cout << "NO\n";
    }
    return 0; 
}
