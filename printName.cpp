#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void print(int n,string str){
    if(n==0)
    return;
    cout<<str<<endl;
    n--;
    print(n,str);
}
int main()
{
    string str;
    cout<<"Enter your Name please !";
    getline(cin,str);
    print(5,str);
    return 0;
}