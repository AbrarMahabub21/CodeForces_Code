#include <iostream>

using namespace std;

int main()
{
    int t;
    int a,b,cnt = 0, k=0;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        cnt = (a+k)-b;

        if (cnt< 0)
        {
            k = 0;
        }
        else
        {
             k = cnt;
        }

    }
    cout<<cnt;
    cout<<endl;
    return 0;
}
