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

    vector<int> p(n);
    p[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = v[i] + p[i - 1];
    }

    int m;
    cin >> m;

    while (m--)
    {

        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        int ans = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (p[mid] >= x)
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}