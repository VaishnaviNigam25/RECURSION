#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int  fib(int n)
{
    if(n<=1)//either 1 or 0
    return n;
    return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
  cout<<"enter N";
  cin>>n;
  cout<<fib(n)<<endl;
    return 0;
}