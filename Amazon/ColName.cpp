#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    string colName (long long int n)
    {
        string s = "";
        while(n != 0) {
            n--;
            int r = n % 26;
            s = string(1, r + 'A') + s;
            n = n / 26;
        }
        return s;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}