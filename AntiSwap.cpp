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
        int arr[n];
        bool flg = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (arr[i] > arr[j] && abs(i - j) > 1)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "NO" << endl;
                flg = false;
                break;
            }
        }
        if (flg)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}