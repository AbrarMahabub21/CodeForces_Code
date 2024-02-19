#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int cntA = 0, cntB = 0;

        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == 'A')
            {
                cntA++;
            }
            else
            {
                cntB++;
            }
        }

        if (cntA > cntB)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}