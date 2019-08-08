#include <iostream>
#include<math.h>
using namespace std;

int main() {
  int x,p,s=0,y;
  cin>>x>>p;
  while(x!=1)
  {
  s=s+x;      
  y=ceil((x*p)/100);
  x=x-y;
  
  }
  cout<<s+1;
}
