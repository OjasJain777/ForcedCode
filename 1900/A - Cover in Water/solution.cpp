#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;
	cin >>n;
	for(int k =0 ; k<n;k++){
	    int l ;
	    int ans =0;
	    cin >>l;
	    string a;
	    cin>>a;
	    int c= 0;
	    int t= 0;
	    for(auto x:a){
	        if(x=='.'){
	            c++;
	            t++;
	        }
	        else{
	            c=0;
	        }
	        if(c==3){
	            ans = 2;
	            break;
	        }
	        ans = t;
	    }
	    cout<< ans<<endl;
	}
	return 0;
}