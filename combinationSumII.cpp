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
   
    if(t==0)
    {
        print(ans);
    
        return;
    }
    //if we pick the element
    for(int ind=i;ind<n;ind++)
    {
        if(ind>i && arr[ind]==arr[i])
        continue;
        if(arr[ind]>t)
        break;
        ans.push_back(arr[ind]);
    findComb(ind+1,n,arr,t-arr[ind],ans);
    ans.pop_back();
    }
    
  
    
}

int main()
{
    int t;
    int arr[7]={10,1,2,7,6,1,5};
    sort(arr,arr+7);
    cout<<"Enter Target";

    cin>>t;
    vector<int> ans;
    findComb(0,7,arr,t,ans);


    return 0;
}