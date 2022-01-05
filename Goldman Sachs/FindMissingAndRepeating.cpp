#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans=new int[2];
        int counter[n+1]={0};
        for(int i=0;i<n;i++){
            if(counter[arr[i]]!=0){
                ans[0]=arr[i];
            }
            else{
                counter[arr[i]]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(counter[i]==0){
                ans[1]=i;
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 