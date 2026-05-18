#include <iostream>
using namespace std;

void check(string s) {
    int n = s.length();
    bool isAccept = true;

    if(n == 0 || s[0] != 'a') {
        isAccept = false;
    }
    else {
        for(int i = 1; i < n; i++) {
            if(s[i] != 'b') {
                isAccept = false;
                break;
            }
        }
    }

    if(isAccept) cout << "Accepted";
    else cout << "Not Accepted";
}

int main () {
    string s;
    getline(cin, s);
    check(s);
    return 0;
}
