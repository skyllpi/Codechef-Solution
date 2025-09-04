#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n, q;
        cin >> n >> q;  
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            cin >> res[i];
        }

        int result = res[0];
        for (int i = 1; i < n; i += 2) {
            result = min(res[i + 1], max(res[i], result));
        }

        cout << result << '\n';
    }

    return 0;
}
