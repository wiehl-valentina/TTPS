#include <bits/stdc++.h> 

using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
    FIN; 
    
    int words;
    cin >> words;

    string word;
    
    for (int i = 0; i < words; i++) {
        cin >> word; 
        if (word.length() > 10)
            cout << word[0] << word.length()-2 << word[word.length()-1];
        else
            cout << word;
        
        cout << "\n";
    }
    return 0; 
}