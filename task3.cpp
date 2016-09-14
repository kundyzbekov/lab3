#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

  cout<<"enter three numbers"<<endl;
  int x,y,z,a,b,c;
 // a=x*2;
 // b=y*2;
 // c=z*2;
  cin>>x>>y>>z;
  if (x>=y && y>=z && x>=z) { 
   cout<<x*2<<" "<<y*2<<" "<<z*2<<endl;}
  else {
 cout<<abs(x)<<" "<<abs(y)<<" "<<abs(z)<<endl;}

 system("pause>nul");
 return 0;
}