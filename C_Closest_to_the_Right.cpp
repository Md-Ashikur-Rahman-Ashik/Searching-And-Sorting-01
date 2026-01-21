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

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (m--)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        int index = n;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] >= x)
            {
                index = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << index + 1 << '\n';
    }

    return 0;
}