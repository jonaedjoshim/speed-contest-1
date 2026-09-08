#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int extra = m - n;
    int happy = min(n, extra);

    cout << happy << endl;

    return 0;
}