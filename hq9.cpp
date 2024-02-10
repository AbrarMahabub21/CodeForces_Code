#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    bool flg = false;
    cin >> str;
    int x = str.length();
    for (int i = 0; i < x; i++)
    {
        /* code */
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            flg = true;
            break;
        }
    }
    if (flg == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}