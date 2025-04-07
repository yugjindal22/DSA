#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>

using namespace std;

int LineTrip(vector<int> arr, int n, int x)
{
    int maxx = 0;
    if (n == 1)
    {
        return max(arr[0], (x - arr[n - 1]) * 2);
    }
    if (n == 0)
    {
        return 2 * x;
    }
    for (int i = 1; i < n; i++)
    {
        maxx = max(maxx, arr[i] - arr[i - 1]);
        }
    maxx = max(maxx, (x - arr[n - 1]) * 2);
    return max(maxx, arr[0]);
}

int main()
{
    int t, n, x, a;
    vector<int> arr;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            arr.push_back(a);
        }
        cout << LineTrip(arr, n, x) << endl;
        arr.clear();
    }
}
