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
    cin >> k;

    while (k--)
    {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        int rightAns = -1;

        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] <= secondValue)
            {
                rightAns = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        int leftAns = -1;

        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] >= firstValue)
            {
                leftAns = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (rightAns == -1 || leftAns == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << rightAns - leftAns + 1 << " ";
        }
    }

    return 0;
}