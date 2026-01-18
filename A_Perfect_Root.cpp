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

    vector<double> v;
    for (double i = 100000000; i >= 1; i--)
    {
        if (sqrt(i) == floor(sqrt(i)))
        {
            v.push_back(sqrt(i));
        }
    }

    while (t--)
    {
        int x;
        cin >> x;

        for (int i = 0; i < x; i++)
        {
            cout << v[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}