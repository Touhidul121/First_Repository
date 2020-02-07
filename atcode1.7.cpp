#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<pair<int,int>> vec;
    multimap<int,int> mp;
    map<int,int>::iterator it,it1;
    int a,b,x,h,n,count1=0,k=0;
    cin>>h>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));

    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    vector<pair<int,int>> vec1(vec.begin(),vec.end());
     sort(vec1.begin(), vec1.end(), sortbysec);

    for(int i=0; i<n; i++)
    {
        x=vec[i].first-vec[i].second;
        mp.insert(make_pair(x,i));

    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        it1=it;
    }
    int i=n;
    for(it=it1; i>0; it--)
    {

        i--;
    }
    i=n;
    for(it=it1; i>0; it--)
    {

        int j=it->second;


         if(vec[j].first<=h)
        {
            if(h%vec[j].first==0)
            {
                count1=(h/vec[j].first)*vec[j].second;
                break;
            }
            else
            {
                double d,e;
                d=floor((h*1.0)/vec[j].first);
                int x=(int)(d);

                if(x!=0){
                count1=count1+x*vec[j].second;
                h=h-x*vec[j].first;

                }
            }
        }

        i--;
        if(i==1)
        {
           count1=count1+vec1[0].second;
           break;
        }
    }
    cout<<count1<<endl;
}
