#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    int k, l, p;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            p = i;
        }
        else if (s[i] == 'B')
        {
            k = i;
        }
        else
        {
            l = i;
        }
    }
    if (p == 0 && k == 1)
        cout << a << " " << c << " " << b << endl;
    else if (p = 1 && k == 2)
        cout << a << " " << c << " " << b << endl;
    else if (p = 0 && k == 2)
        cout << a << " " << b << " " << c << endl;
    else if (p = 2 && k == 1)
        cout << a << " " << b << " " << c << endl;
    else if (p = 1 && k == 0)
        cout << c << " " << a << " " << b << endl;
    else if (p = 2 && k == 0)
        cout << b << " " << a << " " << c << endl;
}