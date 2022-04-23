#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) 
    {
        string s, w;
        cin >> s;
        if(s[0] == 'a') 
        {
            w += "b";
            w += s;
        }
        else
        {
            w += "a";
            w += s;
        }
        if(s[s.size() - 1] == 'a')
        {
            w += "b";
        }
        else
        {
            w += "a";
        }
        string s1 = "aba", s2 = "bab";
        if(strstr(w.c_str(),s1.c_str()) || strstr(w.c_str(),s2.c_str()))
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout << "yes" << endl;
        } 
    }
    return 0;
}
