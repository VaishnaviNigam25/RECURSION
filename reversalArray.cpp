#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void reversal(int arr[],int n,int i)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reversal(arr,n,i+1);

}
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    reversal(arr,n,0);
    for(auto el:arr)cout<<el<<" ";
    return 0;
}