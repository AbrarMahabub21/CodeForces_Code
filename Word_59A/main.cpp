#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a;
   int up = 0, low =0;
   cin>>a;
   for (int i= 0; i<a.size();i++)
   {
       if(isupper(a[i]))
       {
           up++;
       }

       if(islower(a[i]))
       {
           low++;
       }
   }

   if(up>low)
   {
       for(int i=0; i<a.size(); i++)
       {
           cout<<(char)toupper(a[i]);
       }

   }

   if((low > up) || low == up)
   {
       for(int i =0; i<a.size();i++)
       {
           cout<<(char)tolower(a[i]);
       }

   }
    return 0;
}
