#include <bits/stdc++.h>
using namespace std;
using int64=long long;
unordered_map<int64,int64>memo_h;
unordered_map<int64,int64>memo_f;
int64 ko(int64 m){
    if(m<=0)return 0;
    if(memo_h.count(m))return memo_h[m];
    int k=63-__builtin_clzll(m);
    int64 L=1LL<<k;
    return memo_h[m]=ko(L-1)+ko(m-L)+L;
}
int64 solve(int64 n){
    if(n<=1)return 0;
    if(memo_f.count(n))return memo_f[n];
    int k=63-__builtin_clzll(n);
    int64 L=1LL<<k;
    int64 p=n-L;
    int64 delta=(p==0?1:0);
    return memo_f[n]=solve(L-1)+ko(p)+L+delta;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int64 n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	    
 
	   
	}
	return 0;

}
