#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
	while(n--){
	    long long m;
	    cin >>m;
	    long long ans = INT_MAX;
	    long long o = INT_MIN;
	    bool b = 0;
	    while(m--){
	        long long k;
	        cin >>k;
	        if(o > k){
	            b=1;
	        }
	        ans = min(ans, max(0LL, k-o));
	        o=k;
	    }
	    if(b==1){
	        cout<<0;
	    }
	    else{
	        ans = ans/2 + 1;
	        cout<<ans;
	    }
	    cout<<endl;
	}
	return 0;
}