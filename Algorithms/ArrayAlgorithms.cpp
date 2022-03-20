#include<bits/stdc++.h>
using namespace std;

//Duplicate element remove from an array
int DuplicateRemove(int arr[],int n)
{
    if(n==0 || n==1)
        return n;

    int j=0;
    for(int i=0; i<n-1; i++)
        if(arr[i] != arr[i+1])
        {
            arr[j] = arr[i];
            j++;
        }

    arr[j++] = arr[n-1];

    return j;
}

//Fibonacci
void Fibonacci(int n)
{
    int a=0;
    int b=1;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<b<<" ";
            continue;
        }
        int next = a+b;
        a=b;
        b=next;
        cout<<next<<" ";

    }
}
//Compare two pair by it's key value
bool comp(pair<string,int> a,pair<string,int> b)
{
    return a.second< b.second;
}
//Take set of String a print K's frequince
unordered_map<string, int> mp;
void StringFriq()
{
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        mp[s]++;
    }

    vector <pair<string,int> > v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
}
//Duplicate number find
int DuplicateFind(int arr[],int n)
{
    if(n==1)
    {
        cout<<"No Duplicate"<<endl;
        return 0;
    }
    int j=0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}

int main()
{

    return 0;
}
