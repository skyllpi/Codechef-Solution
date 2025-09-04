#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int n;
        cin >> n;
        vector<int> res(n);

        for (int i = 0; i < n; ++i) {
            cin >> res[i];
        }

        bool f = false;
        for (int i = 0; i < n - 1; ++i) {
            if (res[i] > res[i + 1]) {
                cout << i + 1 << " " << i + 2 << endl; 
                f = true;
                break;
            }
        }

        if (!f) {
            cout << -1 << endl;
        }
    }

    return 0;
}