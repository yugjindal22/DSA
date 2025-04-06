#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>

using namespace std;

string Halloumi(vector<int> arr, int n, int k)
{

    if (k == 1)
    {

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1] && arr[i] < arr[i - 1])
            {
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    int cases, n, k, c;
    vector<int> arr;
    cin >> cases;

    for (int j = 0; j < cases; j++)
    {
        arr.clear();
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> c;
            arr.push_back(c);
        }

        cout << Halloumi(arr, n, k) << endl;
    }
    return 0;
}