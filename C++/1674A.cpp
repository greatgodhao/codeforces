#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(x > y) cout << 0 << ' ' << 0 << endl;
        else
        {
            if(y % x) cout << 0 << ' ' << 0 << endl;
            else
            {
                cout << 1 << ' ' << y / x << endl;
            }
        }
    }
    return 0;
}
