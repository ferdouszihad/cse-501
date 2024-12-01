#include <bits/stdc++.h>
using namespace std;
int main()
{
    // s= -> assign string.
    string s1 = "Hello";
    // s+= -> append another string.
    string s2 = "world";
    s1 += " " + s2;
    cout << s1 << endl;
    // s.append() -> append another string.
    s1.append(". My Name is Zihad.");
    string s4 = "I work at programming Hero";
    s1.append(s4);
    cout << s1 << endl;
    // s.push_back() -> add character to the last of the string.
    s1.push_back('.');
    cout << s1 << endl;

    // s.pop_back() -> remove the last character of the string.
    s1.pop_back();
    cout << s1 << endl;
    // s.assign() -> assign string.
    // s1.assign("hello");
    // s1 = "mewo mewo";
    // cout << s1 << endl;
    // s.insert() -> insert a portion to a specific position.
    s1.insert(30, " ");
    cout << s1 << endl;

    // s.replace() -> replace a portion of the string.
    // replace(kon pos , koto gula , bodole ki boshaba)
    s1.replace(3, 2, "");

    cout << s1 << endl;
    // s.erase() -> erase characters from the string.
    s1.erase();

    return 0;
}