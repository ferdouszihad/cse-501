#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int min_num = min({n1, n2, n3});
    int max_num = max({n1, n2, n3});

    cout << min_num << " " << max_num << endl;

    return 0;
}