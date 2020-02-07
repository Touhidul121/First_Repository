#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
//#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,n,i,j,k,r,m,o,count1;
    cin>>t;
    for(int l=0;l<t;l++)
    {
         multiset<pair<int,int>> vec;
        multiset<pair<int,int>>::iterator it,it1;
        vector<int> v;
        vec.insert(make_pair(0,0));
         cin>>n;
         i=n+1;
         j=1;
         count1=0;

        while(n--)
        {
        cin>>x>>y;
        vec.insert(make_pair(x,y));
        }

        it1=vec.begin();

        while(j--)
        {
          it1++;
        }

        for(it=vec.begin();i>1;it++,it1++)
        {
            k=(it1->first)-(it->first);
            o=(it1->second)-(it->second);

            if(k<0||o<0)
            {
                count1++;
            }
            else
            {
           v.push_back(k);
           v.push_back(o);
            }
            i--;
        }

        if(count1>0)
        {
            cout<<"NO"<<endl;
        }

        else
        {
        int r=v.size();
        string s;
        for(k=0;k<r;k++)
        {
        if(k%2==0)
        {
            for(m=0;m<v[k];m++)
            {
                s=s+"R";
            }
        }
        else
        {
         for(m=0;m<v[k];m++)
         {
             s=s+"U";
         }
        }
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
        }
    }

}
