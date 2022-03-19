#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
int main()
{
    int n,m,i;
    //freopen("input.txt","r",stdin);
    cin>>n;
    vector <int> v;
    set <int>st;
    int xx=0;
    string s;
    int z;
    for(i=0;i<n;i++)
    {
        cin>>z;
        st.insert(z);
    }
    for(auto x:st)
    {
        //cout<<x<<endl;
        v.push_back(x);
    }
   for(i=0;i<v.size();i++)
   {

       cout<<v[i]<<endl;
   }

    return 0;
}
