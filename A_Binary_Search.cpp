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

  int n, k;
  cin >> n >> k;

  vector<int> firstVector(n);
  for (int i = 0; i < n; i++)
  {
    cin >> firstVector[i];
  }

  vector<int> secondVector(k);
  for (int i = 0; i < k; i++)
  {
    cin >> secondVector[i];
  }

  for (int i = 0; i < k; i++)
  {
    int l = 0;
    int r = n - 1;

    bool flag = false;

    while (l <= r)
    {
      int mid = (l + r) / 2;

      if (secondVector[i] == firstVector[mid])
      {
        flag = true;
        break;
      }
      else if (secondVector[i] < firstVector[mid])
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }

    if (flag)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}