#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int co = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if( a[i] % 2 != 0) co++;
        }
        if(co == 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
