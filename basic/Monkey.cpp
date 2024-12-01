#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000001];

    while (cin.getline(s, 100001))
    {
        int a[26] = {0};
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ')
                continue;
            a[(int)s[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {

            while (a[i]-- > 0)
                cout << (char)(i + 97);
        }
        cout << endl;
    }
    return 0;
}