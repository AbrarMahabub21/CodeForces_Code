#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        int cnt = 0, cntforeachrow = 0, cntmax = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    cnt++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    cntforeachrow++;
                }
            }
            if (cntmax < cntforeachrow)
            {
                cntmax = cntforeachrow;
            }
            cntforeachrow = 0;
        }

        ((cntmax * cntmax) == cnt) ? cout << "SQUARE" << endl : cout << "TRIANGLE" << endl;
    }

    return 0;
}
