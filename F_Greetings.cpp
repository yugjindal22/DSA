#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>

using namespace std;

int Greetings(vector<vector<int>> arr, int n)
{
    vector<int> ends;
    int greetings = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][0] < arr[i][1] && arr[j][1] > arr[i][1])
            {
                if ((arr[i][1] - arr[i][0]) <= (arr[i][1] - arr[j][0]))
                    greetings++;
            }
        }
    }
    return greetings;
}

int main()
{
    int t, n, a, b;
    vector<vector<int>> arr;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            cin >> b;

            arr.push_back({a, b});
        }
        cout << Greetings(arr, n) << endl;
        arr.clear();
    }
}