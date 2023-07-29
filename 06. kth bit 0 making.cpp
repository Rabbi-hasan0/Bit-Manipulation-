#include<bits/stdc++.h>
using namespace std;

/* Explain this operation:-
-------------------------------
if kth bit 0 or 1 then we do that:
 x=11, k=2;
 And now 2no bit have to change so,
 we can kth left shift binary of 1.
 After this binary value OR operation with [.. x|(1<<k) ..]
 sln:
                      8 4 2 1
        binary of 11= 1 0 1 1
1 left shift k=2 bit= 0 1 0 0
-------------------------------
OR operation        = 1 1 1 1

*/
int set_kth_bit(int x, int k){
return x|(~(1<<k));
}
int main()
{
    int x,k;
    cin>>x>>k;
    int res=set_kth_bit(x,k);
    cout<<res<<endl;
    return 0;
}