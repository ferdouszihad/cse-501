#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, sum, c = 0;
        cin >> n >> sum;
        int a[n], isPossible = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == sum)
                    {
                        // cout << a[i] + a[j] + a[k] << endl;
                        // cout << i << " " << j << " " << k << endl;

                        isPossible = 1;
                    }
                }
            }
        }

        if (isPossible == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        isPossible = 0;
    }
    return 0;
}