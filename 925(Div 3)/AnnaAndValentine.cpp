#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        int largest = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            largest = max(largest, a[i]);
        }

        // If the largest number in the initial list is already >= 10^m, Sasha wins
        if (largest >= pow(10, m))
        {
            cout << "Sasha" << endl;
            continue;
        }

        // Simulate the game
        bool annaTurn = true;
        while (true)
        {
            // Anna's turn
            if (annaTurn)
            {
                bool annaWins = false;
                for (int i = 0; i < n; ++i)
                {
                    int temp = a[i];
                    int reversed = 0;
                    while (temp > 0)
                    {
                        reversed = reversed * 10 + (temp % 10);
                        temp /= 10;
                    }
                    if (reversed > largest)
                    {
                        largest = reversed;
                        if (largest >= pow(10, m))
                        {
                            annaWins = true;
                            break;
                        }
                    }
                }
                if (annaWins)
                {
                    cout << "Anna" << endl;
                    break;
                }
                annaTurn = false;
            }
            // Sasha's turn
            else
            {
                if (n == 1)
                {
                    cout << "Anna" << endl;
                    break;
                }
                int idx1 = 0, idx2 = 1;
                if (a[idx1] > a[idx2])
                    swap(idx1, idx2);
                a[idx1] = a[idx1] * (int)pow(10, (int)log10(a[idx2]) + 1) + a[idx2];
                a.erase(a.begin() + idx2);
                n--;
                annaTurn = true;
            }
        }
    }

    return 0;
}
