#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            c++;
        }
        else if(s[1]=='-')
        {
            c--;
        }
    }
    cout<<c<<endl;
}
