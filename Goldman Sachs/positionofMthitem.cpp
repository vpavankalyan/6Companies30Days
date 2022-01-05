#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if(M==1){
            return K;
        }
        else if(M>N-K+1){
            M=M-(N-K+1);
            if(M%N==0){
                return N;
            }
            else{
                return M%N;
                    
            }
        }
        else{
            return M+K-1;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  