#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >>n;
	for(int k =0; k<n;k++){
	    int n2;
	    cin >>n2;
	    unordered_map<int,int> m;
	    for(int i = 0; i<n2;i++){
	        int j;
	        cin >>j;
	        m[j]++;
	    }
	    if(m.size()==1){
	        cout<<"Yes";
	    }
	    else if(m.size()!=2){
	        cout<<"No";
	    }
	    else{
	        auto it = m.begin();
	        int k1 = it->second;
	        int k2 = (++it)->second;
	        if(abs(k1 - k2) <= 1){
	            cout<<"Yes";
	        }
	        else{
	            cout<<"No";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}