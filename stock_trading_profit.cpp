#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n;
    n=3;
    x=13;
    y=15;
    cout<<(y*(n-1)+x)-(x*(n-1)+y)+1;
    for(int i=(x*(n-1)+y);i<=(y*(n-1)+x);i++)
    {
        cout<<i<<",";
    }
    return 0;
}