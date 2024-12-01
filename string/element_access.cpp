#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    cout << "string" << " = " << s << endl;
    // accesing string elements
    cout << "3rd element" << " = " << s[2] << endl;
    cout << "3rd element" << " = " << s.at(2) << endl;
    cout << "1st element-at" << " = " << s.at(0) << endl;
    cout << "1st element-front" << " = " << s.front() << endl;
    cout << "1st element-[0]" << " = " << s.front() << endl;
    cout << "last ele- [size-1]" << " = " << s[s.size() - 1] << endl;
    cout << "last ele- at" << " = " << s.at(s.size() - 1) << endl;
    cout << "last ele- back" << " = " << s.back() << endl;

    return 0;
}