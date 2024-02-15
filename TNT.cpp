#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, diff;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());
        int x = arr[0];
        int y = arr[n - 1];
        cout << (diff = x - y) << endl;
    }
}