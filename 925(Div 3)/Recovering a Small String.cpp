#include <bits/stdc++.h>
using namespace std;

void Recoverval(int &n)
{
    for (char i = 'a'; i <= 'z'; ++i)
    {
        for (char j = 'a'; j <= 'z'; ++j)
        {
            for (char k = 'a'; k <= 'z'; ++k)
            {
                if (i - 'a' + 1 + j - 'a' + 1 + k - 'a' + 1 == n)
                {
                    cout << i << j << k << endl;
                    goto end;
                }
            }
        }
    }
end:;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Recoverval(n);
    }
    return 0;
}