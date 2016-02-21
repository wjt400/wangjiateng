#include<iostream>
using namespace std;
int star(int a,int b);
int main()
{
  int x,y,sum;
  cout<<"please input two numbers:\n"
  cin>>x>>y;
  sum=star(x,y);
  cout<<"x+y="<<sum;
  return 0;
}
  int star(int x,int y)
  {
    int he;
    he=x+y;
    return he;
 }
  
  
