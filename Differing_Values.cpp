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
        int n, k;
        string s;

        cin >> n >> k;
        cin >> s;

        int one = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                one++;
            }
        }

        int mn = 0;
        int odd = 0;

        for (int i = 0; i < k; i++)
        {
            int len = 0;

            for (int j = i; j < n; j += k)
            {
                len++;
            }

            mn += len / 2;

            if (len % 2)
            {
                odd++;
            }
        }

        if (one >= mn && one <= mn + odd)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}