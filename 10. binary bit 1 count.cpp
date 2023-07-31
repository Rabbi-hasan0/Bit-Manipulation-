#include<bits/stdc++.h>
#define ll long long
using namespace std;

// bit counting applying right shift operator
int bit_count(int n){
 int cnt=0;
 for(int k=0; k<10; k++){ // 1000 < (2^10 = 1014)
 if((n >> k) & 1){
 cnt++;
 }
 }
 return cnt;
}
// bit counting from binary value
int bit_cnt(int n){
 int cnt=0;
 while(n>0){
 if(n%2==0){
 n/=2;
 }
 else{
 cnt++;
 n--;
 }
 }
 return cnt;
}


int main()
{
    int t=1;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
    //ans+= bit_cnt(i);
    //ans+=bit_count(i);     //O(log(n))
    ans+=__builtin_popcount(i);  //O(1)
    }
    cout << ans << '\n';
    }
    return 0;
}
