#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int res=1;
        int count=0;
        int j=0;
        for(int i=0;i<n;i++){
            res=res*a[i];
            while(j<n&&res>=k){
                res/=a[j];
                j++;
            }
            count=count+(i-j+1);
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}