#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        int charmap[n][26]={0};
        vector<vector<string>> res;
        int qlen = (int) s.length();
        res.resize(qlen);
        for(int i=0;i<n;i++){
            string temp = contact[i];
            for(int j=0;j<temp.length();j++){
                int t = temp[j] - 'a';
                charmap[i][t]++;
            }
        }
        for(int i=0;i<s.length();i++){
            char temp = s[i];
            int tar = temp - 'a';
            for(int j=0;j<n;j++){
                if(charmap[j][tar]>0){
                    res[0].push_back(contact[i]);
                }
            }
        }
        return res;
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  