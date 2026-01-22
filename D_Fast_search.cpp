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

    int k;
    while (k--)
    {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        int count = 0;

        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            
        }
    }

    return 0;
}