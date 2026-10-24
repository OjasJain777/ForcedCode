#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin>>n;
	for(long long k =0; k<n;k++){
	    long long m,x;
	    cin>>m >>x;
	    long long p = 0;
	    long long ans = 0;
	    for(long long j =0; j<m;j++){
	        long long h;
	        cin>>h;
	        ans = max(ans, h-p);
	        p=h;
	    }
	    ans = max(ans, 2*(x-p));
	    cout<<ans <<"
";
	}
	return 0;
}