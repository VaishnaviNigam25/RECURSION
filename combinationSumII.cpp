#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void print(vector<int> & ans)
{
    for(auto el:ans)
    cout<<el<<" ";
    cout<<endl;
}
void findComb(int i,int n,int arr[],int t,vector<int> &ans)
{
   if(i==n)
   {
    if(t==0)
    {
        print(ans);
    }
        return;
    }
    //if we pick the element
    if(arr[i]<=t)
    {
    ans.push_back(arr[i]);
    findComb(i+1,n,arr,t-arr[i],ans);
    ans.pop_back();
    }
    //if we donot pick the element
     findComb(i+1,n,arr,t,ans);

}

int main()
{
    int t;
    int arr[5]={2,3,2,4,7};
    cout<<"Enter Target";
    cin>>t;
    vector<int> ans;
    findComb(0,5,arr,t,ans);


    return 0;
}