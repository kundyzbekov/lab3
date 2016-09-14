#include <iostream>
using namespace std;
int main()
{
  cout<<"Enter three numbers"<<endl;
  int x,y,z,a,b,c;
  cin>>x>>y>>z;
  if (x<y && y<z) {
  cout<<"the min value is x= "<<x<<endl;}
  else if(y<x && y<z) {cout<<"the min value is y= "<<y<<endl;}
  else { cout<<"the min value is z= "<<endl;} 


  
  system("pause>nul");
  return 0;
}