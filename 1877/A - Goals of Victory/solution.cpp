#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	while(n--){
	    int m;
	    cin >>m;
	    int s = 0;
	    m--;
	    while(m--){
	        int k ;
	        cin >>k;
	        s -= k;
	    }
	    cout<<s<<endl;
	}
	return 0;
}