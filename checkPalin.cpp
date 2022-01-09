#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool reversal(string &s,int n,int i)
{
    if(i>=n/2)
    {
        return true;
    } 
    if(s[i]!=s[n-i-1])
    return false;
    reversal(s,n,i+1);
}
int main()
{
    string s;
    
    cout<<"Enter string ";
    cin>>s;
    int n=s.length();
    
    if(reversal(s,n,0))
    cout<<"YES, the string is Palindrome\n";
    else
    cout<<"NO, the string is not Palindrome\n";
    
    return 0;
}