#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while (n)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == temp)
    {
        cout << temp << " is Armstrong Number";
    }
    else
    {
        cout << temp << " isn't Armstrong Number";
    }

    return 0;
}