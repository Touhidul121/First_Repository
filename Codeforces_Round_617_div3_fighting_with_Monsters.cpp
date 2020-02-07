#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        c[i]=c[i]%(a+b);
        if(c[i]==0)
            c[i]=a+b;
            //cout<<endl<<c[i]<<endl;
    }
    sort(c,c+n);
    int ans=0;
    int tms;
    for(int i=0;i<n;i++)
    {

    if(c[i]<=a)
    {
        ans++;
    }
      else{
            double d=ceil(((c[i]-a)*1.0)/(a*1.0));
       tms=(int)d;
       //cout<<tms<<endl;
        if(tms>k)
            break;
        k-=tms;
        ans++;
      }
    }
    cout<<ans<<endl;
}
