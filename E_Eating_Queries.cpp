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
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1), prefix(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    for (int i = 1; i <= n; i++)
    {
      prefix[i] = prefix[i - 1] + a[i - 1];
    }

    while (q--)
    {
      int k, ans = -1;
      cin >> k;

      auto it = lower_bound(prefix.begin(), prefix.end(), k);

      if (it != prefix.end())
      {
        ans = it - prefix.begin();
      }

      cout << ans << '\n';
    }
  }

  return 0;
}