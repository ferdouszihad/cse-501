#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0)
    {
        string s;
        getline(cin, s);

        string newS = "", word;

        stringstream ss(s);
        while (ss >> word)
        {
            newS = word + " " + newS;
        }
        cout << newS << endl;
    }

    return 0;
}