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
        long long n;
        cin >> n;

        long long maxNum = LLONG_MIN;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            maxNum = max(v[i], maxNum);
        }

        cout << maxNum * n << '\n';
    }

    return 0;
}