#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    
    string word;
    cin >> word; 
    string TAP = "TAP";

    int i = 0, j = 0; 
    while (i < TAP.length() && j < word.length()) {
        if (TAP[i] == word[j]) i++;
        j++; 
    }

    if (i == TAP.length()) cout << "S" << "\n";
    else cout << "N" << "\n"; 
    
    return 0;
}