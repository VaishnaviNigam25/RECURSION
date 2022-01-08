#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void printN(int n,int N)
{
    if(n>N) 
    return;
    cout<<n++<<" ";
    printN(n,N);
}
int main()
{
    int N;
    cout<<"Enter N\n";
    cin>>N;
    printN(1,N);
    return 0;
}