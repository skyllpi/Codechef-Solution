#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
        string A;
        cin >> N >> A;
        long long total = 0;
        for (char c : A) {
            total += (c - '0');
        }
        long long ans = 3 * total - (A[0] - '0') - (A[N-1] - '0');
        cout << ans << '\n';
	    
	}
	return 0;
}
