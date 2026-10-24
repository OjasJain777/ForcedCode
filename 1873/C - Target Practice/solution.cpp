#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--) {
        int s = 0;
        for(int i = 0; i < 10; i++) {
            string a;
            cin >> a;
            for(int j = 0; j < 10; j++) {
                if(a[j] == 'X') {
                    int r = min(i, 9-i);
                    int c = min(j, 9-j);
                    s += min(r, c) + 1;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}