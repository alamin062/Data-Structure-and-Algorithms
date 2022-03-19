#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    freopen("input.txt","r",stdin);
    cin>>n;
    vector <int> v(n);
    queue <int> st;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        st.push(v[i]);
    }
    // sort(v.rbegin(), v.rend());
    //for(auto x:v){
        //cout<<x<<endl;
    //}
    cout<<st.back()<<endl;

    return 0;
}
