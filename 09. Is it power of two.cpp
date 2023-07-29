#include<bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}

int count_on_bits(int x) {
  int ans = 0;
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(x, k)) {
      ans++;
    }
  }
  return ans;
}

bool check_power_of_2(int x) {
  return count_on_bits(x) == 1;
}

int main()
{
    int n;cin>>n;
     if(check_power_of_2(n)){
     cout<<"YES\n";
     }
     else{
     cout<<"NO\n";
     }

    return 0;
}