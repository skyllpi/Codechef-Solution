#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ispos(int n,int k,const string&s,int ta){
    vector<int>pre1(n+1,0),pre0(n+1,0),diff(n+1,0);
    for(int i=1;i<=n;++i){
        pre1[i]=pre1[i-1]+(s[i-1]=='1');
        
        
    }
    for(int i=0;i<=n;i++){
        pre0[i]=i-pre1[i];
        diff[i]=pre0[i]-pre1[i];
        
    }
    int se=0,pos=1;
    while(pos<=n&&se<k){
        int zb=pre0[pos-1];
        int maxii=diff[pos-1];
        bool f=0;
        
        for(int j=pos;j<=n;++j){
            maxii=max(maxii,diff[j]);
            if(pre1[j]-zb+maxii>=ta){
                ++se;
                pos=j+1;
                f=1;
                break;
            }
        }
        if(!f)break;
    }
    return se>=k;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int l=1,h=n,res=1;
	    while(l<=h){
	        int m=(l+h)/2;
	        if(ispos(n,k,s,m)){
	            res=m;
	            l=m+1;
	        }
	        else h=m-1;
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
	
	

}
