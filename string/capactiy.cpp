#include <bits/stdc++.h>
using namespace std;

int main()
{
    // capacity methods of string
    string s = "sddddd";
    s.resize(2, ' ');
    cout << "string" << " = " << s << endl;
    cout << "size" << " = " << s.size() << endl;
    cout << "capacity" << " = " << s.capacity() << endl;
    cout << "max_size" << " = " << s.max_size() << endl;
    s.clear();
    cout << "string" << " = " << s << endl;
    cout << "empty?" << " = " << s.empty() << endl;

    return 0;
}