#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, str;

    cin >>s>>str;
     reverse(str.begin(), str.end());
     if(s == str)
     {
         cout<<"YES";
     }
     else
        cout<<"NO";
    cout<<endl;
    return 0;
}
