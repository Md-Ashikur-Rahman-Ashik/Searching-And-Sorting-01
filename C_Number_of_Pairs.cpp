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
        int n, l, r;
        cin >> n >> l >> r;

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long firstDistance, secondDistance, a, b, sum = 0;
        for (int i = 0; i < n; i++)
        {
            a = l - v[i];
            auto it = lower_bound(v.begin(), v.end(), a);

            firstDistance = distance(v.begin(), it);
            if (firstDistance <= i)
            {
                firstDistance = i + 1;
            }

            b = r - v[i];
            it = upper_bound(v.begin(), v.end(), b);

            secondDistance = distance(v.begin(), it);
            if (secondDistance <= i)
            {
                secondDistance = i + 1;
            }

            sum += (secondDistance - firstDistance);
        }
        cout << sum << '\n';
    }

    return 0;
}