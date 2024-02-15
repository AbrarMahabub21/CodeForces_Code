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

        vector<long long> containers(n);
        long long sum = 0;

        // Read the amount of water in each container and calculate the total water
        for (int i = 0; i < n; ++i)
        {
            cin >> containers[i];
            sum += containers[i];
        }

        // Calculate the target amount of water each container should have
        long long target = sum / n;

        // Check if it's possible to make the amount of water in all containers the same
        bool possible = true;
        for (int i = 0; i < n; ++i)
        {
            if (containers[i] != target)
            {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
