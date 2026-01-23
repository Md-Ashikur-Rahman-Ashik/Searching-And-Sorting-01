#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x == 2)
        {
            cout << 2 << " " << 1 << '\n';
            continue;
        }

        vector<int> even;
        vector<int> odd;

        for (int i = 1; i <= x; i++)
        {
            if (i % 2 == 0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }

        sort(even.rbegin(), even.rend());
        sort(odd.rbegin(), odd.rend());

        for (auto value : odd)
        {
            cout << value << " ";
        }

        for (auto value : even)
        {
            cout << value << " ";
        }

        cout << '\n';
    }

    return 0;
}