class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = (int)str1.length();
        int len2 = (int)str2.length();
        if(str1+str2==str2+str1){
            return str2.substr(0,gcd(len1,len2));
        }
        else{
            return "";
        }
    }
};