#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k <= n - 1)
        {
            cout << k + n - 1 << endl;
        }
        else
        {
            // Count the diagonals that need at least one colored cell
            int additional_diagonals = k - (n - 1);

            // Calculate the minimum number of cells needed to color
            int colored_cells = n - 1 + additional_diagonals;

            cout << colored_cells << endl;
        }
    }

    return 0;
}
