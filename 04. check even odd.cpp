#include<bits/stdc++.h>
using namespace std;

bool is_even(int x) {
  if (x & 1) {
    return false;
  }
  else {
    return true;
  }
}
int main()
{
    int x;
    cin>>x;
    if(is_even(x))
     cout<<"EVEN\n";
    else
     cout<<"ODD\n";
    return 0;
}