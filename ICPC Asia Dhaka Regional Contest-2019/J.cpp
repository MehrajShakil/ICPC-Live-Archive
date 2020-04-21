#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,n,mx=0;

    cin >> a >> n;
    for(int i=0; i<=n; i++)
    {
        mx = max(mx,abs(__gcd(i,a)));

    }
    cout<<mx<<endl;

}
