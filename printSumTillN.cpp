#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int printsum(int n)
{
    if(n==0)
    return 0;
    return n+printsum(n-1);
} 
int main()
{
    int n;
    cout<<"enter the value of N ";
    cin>>n;
    cout<<"Sum till N is ->"<<printsum(n);
    return 0;
}