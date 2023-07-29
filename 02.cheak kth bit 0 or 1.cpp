#include<bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k) {
  return (x >> k)&1;
}
int main()
{
    int x,k;
    cin>>x>>k;
    int res=check_kth_bit(x,k);
    cout<<res<<'\n';
    return 0;
}