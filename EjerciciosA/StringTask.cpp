#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN;
    
    string word, processedWord;
    cin >> word; 

    for (char c : word) {
        char lower = tolower(c); 
        switch (lower) {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
                continue;
        }
        processedWord+= {'.', lower};
    }
    cout << processedWord << '\n';   
    return 0;
}