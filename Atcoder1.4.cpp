#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long int n,k,a;
    vector<int> health;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        health.push_back(a);
    }
    sort(health.begin(),health.end());

   long long int sum=0;
    for(int i=0; i<n-k; i++)
    {
        sum+=health[i];
    }
    cout<<sum<<endl;
}
