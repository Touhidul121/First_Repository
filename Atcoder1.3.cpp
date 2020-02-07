#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int h,n,sum=0,a;
    cin>>h>>n;
    for(int i=0;i<n;i++)
    {
     cin>>a;
     sum=sum+a;
    }
    if(sum>=h)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
