#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int printfactorial(int n)
{
    if(n==1)
    return 1;
    return n*printfactorial(n-1);
} 
int main()
{
    int n;
    cout<<"enter the value of N ";
    cin>>n;
    cout<<"Factorial of N is ->"<<printfactorial(n);
    return 0;
}