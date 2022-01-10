#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void printSubSequence(int ind,int arr[],vector<int>&ans,int n,int sum,int t)
{
    if(ind >= n)
    {
        if(sum==t){
        for(auto el:ans)
        cout<<el<<" ";
        cout<<endl;
        }
        return;
    }
    ans.push_back(arr[ind]);
    sum+=arr[ind];
    printSubSequence(ind+1,arr,ans,n,sum,t);
    ans.pop_back();
    sum-=arr[ind];
    printSubSequence(ind+1,arr,ans,n,sum,t);
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
    vector<int> ans;
    cout<<"Enter the target sum ";
    cin>>t;
    printSubSequence(0,arr,ans,n,0,t);
    return 0;
}