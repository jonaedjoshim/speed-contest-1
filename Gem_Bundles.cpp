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
        long long r, b, g;
        cin >> r >> b >> g;

        long long mn = min({r, b, g});
        long long total = r + b + g;

        long long ans = mn * 10 + (total - 3 * mn) * 3;

        cout << ans << endl;
    }

    return 0;
}