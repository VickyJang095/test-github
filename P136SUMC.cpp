#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Nghichdao.inp", "r", stdin);
    freopen("Nghichdao.out", "w", stdout);
    string a,b;
    cin>>a>>b;
    int x=0,y=0;
    for (int i=a.size()-1;i>=0;i--)
    {
        x*=10;
        x+=(a[i]-48);
    }
    for (int j=b.size()-1;j>=0;j--)
    {
        y*=10;
        y+=(b[j]-48);
    }
    int maxx;
    maxx=max(x,y);
    cout<<maxx;
}   