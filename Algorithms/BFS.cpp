#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> v[100001];
ll vis[100001],dis[10001];

void BFS(ll n)
{
  queue <ll> q;
  q.push(n);
  vis[n]=1;
  dis[n]=0;
  while(!q.empty())
  {
      ll xx=q.front();
      q.pop();
      for(auto x: v[xx])
      {
          if(vis[x]==0)
          {
              q.push(x);
              dis[x]=dis[xx]+1;
              vis[x]=1;
          }
      }
  }
  cout<<dis[5]<<endl;
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
    BFS(0);
    return 0;
}


