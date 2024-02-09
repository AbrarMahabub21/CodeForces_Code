#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0, half, total2 = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        /* code */
        total += arr[i];
    }
    half = total / 2;

    for (int i = 0; i < n; i++)
    {
        total2 += arr[i];
        if (total2 > half)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
