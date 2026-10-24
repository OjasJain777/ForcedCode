#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	while(n--){
	    int m;
	    cin>>m;
	    int o =0;
	    while(m--){
	        int k;
	        cin>>k;
	        if(k%2==1){
	            o++;
	        }
	    }
	    if(o%2==1){
	        cout<<"NO";
	    }
	    else{
	        cout<<"YES";
	    }
	    cout<<endl;
	}
	return 0;
}