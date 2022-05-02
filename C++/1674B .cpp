#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int a = 0;
        a += (s[0] - 'a') * 25 + s[1] - 'a';
        if(s[1] < s[0]) a++;
        cout << a << endl;
    }
    return 0;
}
