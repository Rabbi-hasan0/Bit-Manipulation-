#include<bits/stdc++.h>
using namespace std;

/* Explain this operation:-
-------------------------------
if kth bit 0 to 1 or 1 to 0 then we do that:
 x=7, k=3;
 And now 2no bit have to change so,
 we can kth left shift binary of 1.
 After this binary value OR operation with [.. x|(1<<k) ..]
 sln:
Always right to left counted the bit.
                ->Like:..3 2 1 0...no of bit.k th value count left to right.
                         -------
                         8 4 2 1
        Binary of 7    = 0 1 1 1
Binary left shift 3 bit= 1 0 0 0
---------------------------------
XOR operation          = 1 1 1 1     (Ans)

*/
int set_kth_bit(int x, int k){
return x^(1<<k);
}
int main()
{
    int x,k;
    cin>>x>>k;
    int res=set_kth_bit(x,k);
    cout<<res<<endl;
    return 0;
}