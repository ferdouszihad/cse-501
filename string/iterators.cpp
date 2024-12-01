#include <bits/stdc++.h>
using namespace std;
void print(string t, auto res)
{
    cout << t << " = " << res << endl;
}
int main()
{
    string s;
    s = "mewo mewo";
    cout << *s.begin() << endl;
    cout << *(s.end() - 1) << endl;

    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it;
    // }
    print("string", s);

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }
    return 0;
    
}