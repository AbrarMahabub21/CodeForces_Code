#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, cnt2;
        cin >> n;
        for (int i = 0; i < n; i += 2)
        {
            cnt++;
        }

        cnt2 = cnt - 1;

        cout << cnt << " " << cnt2 << endl;
    }
    return 0;
}