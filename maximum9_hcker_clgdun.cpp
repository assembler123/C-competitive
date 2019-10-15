#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool compare(ll a,ll b)
{
    ll ca = 0,cb = 0;
    ll r = a,s = b;
    while(a)
    {
        if(a%10==9)
        ca++;
        a/=10;
    }
    while(b)
    {
        if(b%10==9)
        cb++;
        b/=10;
    }

    if(ca>cb)
    return true;
    else if(ca==cb&&r>s)
    return true;
    return false;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,compare);
        ll sum = 0;
        for(int i=0;i<3;i++)
        sum+=a[i];
        cout<<sum<<endl;

    }
}