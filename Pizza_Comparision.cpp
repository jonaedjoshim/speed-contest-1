#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int small = 100 * b;
        int large = 225 * a;

        if (small > large)
        {
            cout << "Small" << endl;
        }
        else if (large > small)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}