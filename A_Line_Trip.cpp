#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> gasPump(n);
        for (int i = 0; i < n; i++)
        {
            cin >> gasPump[i];
        }

        int minTankSize = 0;

        int need = gasPump[0];
        minTankSize = max(minTankSize, need);

        for (int i = 1; i < n; i++)
        {
            need = gasPump[i] - gasPump[i - 1];
            minTankSize = max(minTankSize, need);
        }
        int rest = (x - gasPump[n - 1]) * 2;
        minTankSize = max(minTankSize, rest);
        cout << minTankSize << endl;
    }
    return 0;
}