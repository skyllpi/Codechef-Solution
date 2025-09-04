#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int req = 50 - x;
	    int min_sum = 2*y;
	    int max_sum = 2*y+10;
	    if(req >= min_sum && req<= max_sum){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;

}
