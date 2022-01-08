#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void printN(int N)
{
    if(N==0) 
    return;
    cout<<N--<<" ";
    printN(N);
}
int main()
{
    int N;
    cout<<"Enter N\n";
    cin>>N;
    printN(N);
    return 0;
}