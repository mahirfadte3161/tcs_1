#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> r;
    map<int, int> l;
    map<int, int> up;
    map<int, int> down;

    int n;
    cin >> n;

    int x, y;
    char d;

    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y >> d;

        if(d == 'r')
        {
            r[y] = x;
        }
        else if(d == 'l')
        {
            l[y] = x;
        }
        else if(d == 'u')
        {
            up[y] = x;
        }
        else if(d == 'd')
        {
            down[y] = x;
        }
    }

    int target;
    cin >> target;

    // UP
    if(up.find(target) != up.end())
    {
        cout << up[target] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    // DOWN
    if(down.find(target) != down.end())
    {
        cout << down[target] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    // LEFT
    if(l.find(target) != l.end())
    {
        cout << l[target] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    // RIGHT
    if(r.find(target) != r.end())
    {
        cout << r[target] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}