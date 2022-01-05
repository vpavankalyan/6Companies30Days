#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{
    int count=0;
    if(src.length()>1){
        for(int i=0;i<src.length()-1;i++){
            if(src[i]==src[i+1]){
                count++;
                if(i==src.length()-2){
                    count++;
                    cout<<src[i]<<count;
                }
            }
            else{
                count++;
                if(i==src.length()-2){
                    cout<<src[i]<<count;
                    cout<<src[i+1]<<1;
                }
                else{
                    cout<<src[i]<<count;
                }
                count=0;
            }
        }
            
    }
    else{
        cout<<src[0]<<"1";
    }
}     