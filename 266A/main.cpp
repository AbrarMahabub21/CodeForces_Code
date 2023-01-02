#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int Count = 0;
    string s;
    cin>>n;
    cin>>s;

    for(int i = 0; i<s.size(); i++)
    {
        if( s[i] == s[i+1])
        {
            Count++;
        }
    }
    cout<<Count;
    cout<<endl;
    return 0;


}
