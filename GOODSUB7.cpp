#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n == 0){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    int max = 1;
	    int last = arr[0] % 2;
	    for(int i =1;i<n;i++){
	        int curr = arr[i] % 2;
	        if(curr != last){
	            max++;
	            last = curr;
	        }
	        
	    }
	    cout<<max<<endl;
	    
	}
}
