#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> v[100001];
ll vis[100001],dis[10001];
void DFS(ll n)
{
  vis[n]=1;
  cout<<n<<endl;
  for(auto x: v[n])
  {
      if(vis[x]==0)
        DFS(x);
  }
}

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(0);
    return 0;
}



