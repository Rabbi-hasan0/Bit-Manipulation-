/* just simple way to this process:
  -> First of all I will do the XOR operation on all the values from 1 to n;
  -> Then I will do the XOR operation on all input element;
  -> Then print ans and will saw that your exact answer;
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t=1;
    //cin>>t;
    while(t--){

        int n;
        cin >> n;
        int a[n+5],sum=0;
        for(int i=0; i<=n; i++){
         cin>>a[i];
         sum^=a[i];
        }
        int sum1=0;
        for(int i=1; i<=n; i++){
          sum1^=i;
        }
        cout<<(sum^sum1)<<'\n';
    }
    return 0;
}
