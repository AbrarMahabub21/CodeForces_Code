#include <iostream>

using namespace std;

int main()
{
    int k,n,w,prc = 0,needed;
    cin>>k>>n>>w;
    for(int i = 1; i<=w;i++)
    {
        prc += (i*k);
    }

     if(prc<n)
     {
         needed = 0;
     }
     else{
        needed = prc - n;
     }


    cout<<needed;
    cout<<endl;
    return 0;
}
