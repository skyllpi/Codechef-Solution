#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int min_coins = INT_MAX;
        int max_thr = n/3;
        for (int i = 0; i <= max_thr; i++) {
            int rem = n-3*i;
            if (rem>=0 && rem%2 == 0) {
                int a = rem/2;
                int cost = 5*i + 4*a;
                if (cost < min_coins) {
                    min_coins = cost;
                }
            }
        }
        cout << min_coins << endl;
	}

}
