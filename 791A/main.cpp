#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,Count =1;
    cin>>a>>b;
    while(1)
    {
        if((a=a*3)<=(b=b*2))
        {
            Count++;

        }
        else{
            break;
        }


    }
    cout<<Count;
    cout<<endl;
    return 0;
}
