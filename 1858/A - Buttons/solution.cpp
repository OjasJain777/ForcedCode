#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	while(n--){
	    int a,b,c;
	    cin >> a>>b>>c;
	    if(a>b){
	        cout<<"First";
	    }
	    else if(b>a){
	        cout<<"Second";
	    }
	    else{
	        if(c%2==0){
	            cout<<"Second";
	        }
	        else{
	            cout<<"First";
	        }
	    }
	    cout<<endl;
	}
    return 0;
}