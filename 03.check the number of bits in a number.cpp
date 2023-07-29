#include<bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k) {
  return (x >> k)&1;
}
void print_on_bit(int x) {
  for (int k = 0; k < 32; k++) {
    if(check_kth_bit(x, k)){   /*used [.. if(!check_kth_bit(x, k)) ..]
                                 then print the position of bit 0;  */
      cout << k << ' ';        //print the position of bit 1;
    }
  }
  cout << '\n';
}
int main()
{
    int x;
    cin>>x;
    print_on_bit(x);
    return 0;
}