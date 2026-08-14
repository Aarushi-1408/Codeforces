#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
            {
                ans++;
            }
        }

        int extra = 0;

        for (int j = 1; j <= 2; j++)
        {

            for (int i = 0; (i + 3) < n; i++)
            {
                if (a[i] == a[i + 1] && a[i + 2] == a[i + 3] && a[i + 1] != a[i + 2])
                {
                    extra = max(extra, 2);
                }
                if (a[i] == a[i + 1] && a[i + 2] != a[i] && a[i + 3] != a[i])
                {
                    extra = max(extra, 1);
                }
            }
            if (n >= 3 && a[n - 1] != a[n - 2] && a[n - 2] == a[n - 3])
            {
                extra = max(extra, 1);
            }
            reverse(a.begin(), a.end());
        }

        cout << ans + extra << "\n";
    }
}
