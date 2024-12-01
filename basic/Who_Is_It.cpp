#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int mark;
};

void print(Student a)
{
    cout << a.id << " " << a.name << " " << a.section << " " << a.mark << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        Student a, b, c;

        cin >> a.id >> a.name;
        cin.ignore();
        cin >> a.section >> a.mark;

        cin >> b.id >> b.name;
        cin.ignore();
        cin >> b.section >> b.mark;

        cin >> c.id >> c.name;
        cin.ignore();
        cin >> c.section >> c.mark;

        if (max({a.mark, b.mark, c.mark}) == a.mark)
        {
            if (a.mark == b.mark)
            {
                if (a.id < b.id)
                {
                    print(a);
                }
                else
                {
                    print(b);
                }
            }
            else if (a.mark == c.mark)
            {
                if (a.id < c.id)
                {
                    print(a);
                }
                else
                {
                    print(c);
                }
            }
            else
            {
                print(a);
            }
        }
        else if (max({a.mark, b.mark, c.mark}) == b.mark)
        {
            if (b.mark == a.mark)
            {
                if (b.id < a.id)
                {
                    print(b);
                }
                else
                {
                    print(a);
                }
            }
            else if (b.mark == c.mark)
            {
                if (b.id < c.id)
                {
                    print(b);
                }
                else
                {
                    print(c);
                }
            }
            else
            {
                print(b);
            }
        }
        else
        {

            if (c.mark == a.mark)
            {
                if (c.id < a.id)
                {
                    print(c);
                }
                else
                {
                    print(a);
                }
            }
            else if (c.mark == b.mark)
            {
                if (c.id < b.id)
                {
                    print(c);
                }
                else
                {
                    print(b);
                }
            }
            else
            {
                print(c);
            }
        }
    }

    return 0;
}