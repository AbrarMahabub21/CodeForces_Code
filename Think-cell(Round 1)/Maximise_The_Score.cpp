#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> v(2 * n);
        for (int i = 0; i < (2 * n); i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < (2 * n); i++)
        {
            int x = v[i], y = v[i + 1];
            int mini = min(x, y);
            cnt += mini;
            i++;
            if ((i + 1) == (2 * n - 1))
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}