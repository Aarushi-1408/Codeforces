#include <iostream>
using namespace std;

#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")

bool if_prime(int x)
{

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

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

        if (if_prime(n + 1))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}