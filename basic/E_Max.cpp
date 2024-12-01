#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int max_num = a[0];
    for (int i = 1; i < n; i++)
        max_num = max(a[i], max_num);

    cout << max_num << endl;

    return 0;
}