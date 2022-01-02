#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

class Solution{
public:	
	ull getNthUglyNo(int n) {
	    ull next_num=1;
	    ull ugly[n];
	    int i2 = 0;
	    int i3 = 0;
	    int i5 = 0;
	    ull n2 = 2;
	    ull n3 = 3;
	    ull n5 = 5;
	    ugly[0] = 1;
	    
	    for(int i=1;i<n;i++){
	        next_num = min(n2,min(n3,n5));
	        ugly[i]=next_num;
	        if(next_num==n2){
	            i2++;
	            n2=ugly[i2]*2;
	        }
	        if(next_num==n3){
	            i3++;
	            n3=ugly[i3]*3;
	        }
	        if(next_num==n5){
	            i5++;
	            n5=ugly[i5]*5;
	        }
	    }
	    return next_num;
	    
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}