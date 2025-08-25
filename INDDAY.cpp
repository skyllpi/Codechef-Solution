#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int ind_day = 15;
	int result;
	if (n > 15) {
        result = -1;
    } else {
        result = ind_day - n;
    }

    cout << result << endl;
    return 0;
}
