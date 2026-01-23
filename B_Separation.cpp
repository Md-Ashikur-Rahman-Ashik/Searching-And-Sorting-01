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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && v[i] < k && v[i + 1] > k)
            {
                flag = false;
                break;
            }
            else if (i + 1 < n && v[i] > k && v[i + 1] < k)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}