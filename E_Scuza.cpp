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

    long long t, n, q, i, j, s, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> q;

        long long a[n];
        long long ans[q];
        vector<pair<long long, long long>> qu;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> k;
            qu.push_back({k, i});
        }

        sort(qu.begin(), qu.end());

        s = 0;
        j = 0;

        for (int i = 0; i < q; i++)
        {
            while (j < n)
            {
                if (a[j] <= qu[i].first)
                {
                    s = s + a[j];
                    j++;
                }
                else
                {
                    break;
                }
            }
            ans[qu[i].second] = s;
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}