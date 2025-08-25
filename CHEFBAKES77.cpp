#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> li(3);
	for(int i =0;i<3;i++){
	    cin>>li[i];
	}
	int n = li[0];
	int x = li[1];
	int y = li[2];
	int c_v = y / x ;
	
	if(c_v == 0){
	    c_v = 1;
	}
	int veh = (n + c_v - 1)/ c_v;
	cout<<veh;
}
