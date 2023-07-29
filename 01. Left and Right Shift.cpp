#include<bits/stdc++.h>
using  namespace  std;

/*  let's started  */

int main()
{
    int n,k;
    cin>>n>>k;

    int ans;
    ans= n<<k;   //Left shift operator, kth bit shifted left side;
    cout<<ans<<'\n';

    ans= n>>k;   //Right shift operator, kth bit shifted right side;
    cout<<ans<<'\n';

    ans= n|k;     //OR operation
    cout<<ans<<'\n';
    ans= n&k;     //AND operation
    cout<<ans<<'\n';
    ans= n^k;     //XOR operation
    cout<<ans<<'\n';
    ans= (~n);    //NOT operation

    return 0;
}