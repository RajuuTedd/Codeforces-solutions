#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        if (n % 3 == 0) {
            cout << "First" << endl;
        } else if (n % 3 == 1 && n > 1) {
            cout << "First" << endl;
        } else if (n % 3 == 2 && n > 2) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }

    return 0;
}
    

