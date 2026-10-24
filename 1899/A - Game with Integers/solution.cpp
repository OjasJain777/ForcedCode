#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin >>n;
	for(int k =0; k<n;k++){
	    int m;
	    cin >>m;
	    if(m%3==0){
	        cout<<"Second";
	    }
	    else{
	        cout<<"First";
	    }
	    cout<<endl;
	}
	return 0;
}