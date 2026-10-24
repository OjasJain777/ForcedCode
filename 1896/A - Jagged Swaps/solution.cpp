#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin >>n;
	for(int k =0; k<n;k++){
	    int m;
	    bool b=1;
	    cin >>m;
	    for(int i=0;i<m;i++){
	        int e;
	        cin>>e;
	        if(i==0 && e!=1){
	            b=0;
	        }
	    }
	    if(b==0){
	        cout<<"NO";
	    }
	    else{
	        cout<<"YES";
	    }
	    cout<<endl;
	}
	return 0;
}