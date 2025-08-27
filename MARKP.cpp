#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> allowed_ops(n, false);
        for (int i = 1; i < n-1; i++) {
            allowed_ops[i] = true;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (i-1 >= 1 && i-1 < n-1) allowed_ops[i-1] = false;
                if (i >= 1 && i < n-1) allowed_ops[i] = false;
                if (i+1 >= 1 && i+1 < n-1) allowed_ops[i+1] = false;
            }
        }
        string t(n, '0');
        for (int c = 1; c < n-1; c++) {
            if (allowed_ops[c]) {
                t[c-1] = '1';
                t[c] = '1';
                t[c+1] = '1';
            }
        }
        if (t == s) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}
