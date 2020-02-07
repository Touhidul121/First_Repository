#include<iostream>
#include<cmath>
using namespace std;

long long int func(long long int h)
{
    double x=(double)(h);
    double l=floor(x/2);
    long long int p=(long long int)(l);
    if(h==1)
        return 1;

    return 2*func(p)+1;
}
int main()
{
    long long int h;
    cin>>h;
    cout<<func(h)<<endl;
}
