#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while (t--) {
        int n;
        cin >> n;
        
        string base = "aab";
        string s;
        if(n>5){
            return -1;
        }
        for (int i = 0; i < n; i++) {
            s += base[i % 3];
        }
        cout << s << endl;
    }
    return 0;
}
