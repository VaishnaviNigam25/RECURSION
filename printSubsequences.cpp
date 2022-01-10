#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void printSubSequence(int ind,int arr[],vector<int>&ans,int n)
{
    if(ind >= n)
    {
        for(auto el:ans)
        cout<<el<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    printSubSequence(ind+1,arr,ans,n);
    ans.pop_back();
    printSubSequence(ind+1,arr,ans,n);
}
int main()
{
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
    printSubSequence(0,arr,ans,n);
    return 0;
}