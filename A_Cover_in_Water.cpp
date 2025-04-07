#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>

using namespace std;

int CoverInWater(string s, int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
            continue;
        if (s[i] == '.')
        {
            if (i > 1 && s[i - 1] == 'w' && s[i - 2] == 'w')
            {
                s[i] = 'w';

                return 2;
            }
            else
            {
                s[i] = 'w';
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int t, n;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        cout << CoverInWater(s, n) << endl;
    }
}