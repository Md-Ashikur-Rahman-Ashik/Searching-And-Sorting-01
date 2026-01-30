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

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;

        int ans = -1;
        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int mid = (l + (r - l) / 2);
            if (m < v[mid])
            {
                r = mid - 1;
            }
            else if (m >= v[mid])
            {
                l = mid + 1;
                ans = mid;
            }
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}