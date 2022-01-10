#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int printSubSequence(int ind,int arr[],int n,int sum,int t)
{
    if(ind >= n)
    {
        if(sum==t){
        return 1;
        }
        return 0;
    }
    
    sum+=arr[ind];
    int l= printSubSequence(ind+1,arr,n,sum,t);
   
    sum-=arr[ind];
    int r= printSubSequence(ind+1,arr,n,sum,t);
    return l+r;
}
int main()
{
    int n,t;
    cout<<"Enter the size of Array ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
   
    cout<<"Enter the target sum ";
    cin>>t;
    cout<<printSubSequence(0,arr,n,0,t)<<"Subsequence ";
    return 0;
}