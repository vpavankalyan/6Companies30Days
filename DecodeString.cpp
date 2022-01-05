#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int i = 0;                                                
    string repeat(string s, int times) {                      
        for(int n = s.length(); --times; s += s.substr(0, n));
        return s;
    }
    string decodedString(string s){
        string ans = "", n = "";
        while(i < s.length() && s[i] != ']') {                  
            for(; i < s.length() && isalpha(s[i]); i++)          
                ans += s[i]; 
            if(i >= s.length() || s[i] == ']') continue;        
            for(n = ""; i < s.length() && isdigit(s[i]); i++)  
                n += s[i];
            i++;                                            
            ans += repeat(decodedString(s), stoi(n));         
            i++;                                               
        } 
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  