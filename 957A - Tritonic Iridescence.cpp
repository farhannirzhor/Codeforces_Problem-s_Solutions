#include<bits/stdc++.h>
using namespace std;
int n;
bool b;
char c[110];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        if(c[i]!='?')
        {
            if(c[i-1]==c[i])
            {
                cout<<"No";
                return 0;
            }
        }
        else {
        if(i==1 || i==n)
        {
            b = true;
        }
        else if(c[i-1]=='?' || c[i+1]=='?')
        {
            b = true;
        }
        else if(c[i-1]!='?' && c[i+1]!='?' && c[i-1] == c[i+1])
        {
            b = true;
        }
    }
    }
  
    if(b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}