#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, min_val = INT32_MAX;
    cin >> t;
    while (t-- > 0)
    {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                min_val = min(min_val, a[i] + a[j] + j - i);
            }
        }
        cout << min_val << endl;
    }
    return 0;
}