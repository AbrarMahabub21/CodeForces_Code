#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> freq;

        // Input and count frequency
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Find the most common element
        int most_common_freq = 0;
        int most_common_element = -1;
        for (auto &it : freq)
        {
            if (it.second > most_common_freq)
            {
                most_common_freq = it.second;
                most_common_element = it.first;
            }
        }

        // Calculate the cost
        int cost = n - most_common_freq;
        int current_cost = 0;
        int segment_cost = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != most_common_element)
            {
                segment_cost++;
            }
            else
            {
                current_cost = max(current_cost, segment_cost);
                segment_cost = 0;
            }
        }
        current_cost = max(current_cost, segment_cost);
        cost = min(cost, current_cost);

        cout << cost << endl;
    }

    return 0;
}
