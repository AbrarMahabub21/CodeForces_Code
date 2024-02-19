#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> permutation;

        // For n > 3, we can generate a permutation where the last two elements are 1 and 2
        permutation.push_back(n);
        permutation.push_back(n - 2);
        permutation.push_back(n - 1);

        // Append remaining elements in increasing order
        for (int i = 1; i <= n - 3; i++)
        {
            permutation.push_back(i);
        }

        // Output the permutation
        for (int i = 0; i < n; i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
