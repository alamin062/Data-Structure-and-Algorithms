#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Primality test
bool isPrime(int n)
{
    if(n<2)
        return false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool isPrime1(int n)
{
    if(n<2)
        return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


//Divisor count
int DivisorCount(int n)
{
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    return cnt;
}
int DivisorCount1(int n)
{
    int cnt=0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                cnt++;
            }
            else
            {
                cnt=cnt+2;
            }
        }
    }
    return cnt;
}

//Finding Divisor
void findDivisor(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                cout<<i<<endl;
            else
                cout<<n/i<<" "<<i<<endl;
        }
    }
}

//Finding sum of digits of a number
int DigitSum(int n)
{
    int temp=0;
    while(n>0)
    {
        temp=n%10+temp;
        n=n/10;
    }
    return temp;
}

//sieve algorithm
typedef unsigned long long ull;
const ll maxn=1e+7;
bool mark[maxn+1];
vector<ull> Primes1;
void Sieve()
{
    for(ll i=2; i<=maxn; i++)
    {
        if(!mark[i])
            Primes1.push_back(i);
        for(ull j=2*i; j<=maxn; j+=i)
            mark[j]=1;
    }
}

//Sieve of Eratosthenes
//bool mark[90000001];
vector<ll> Primes;
//sieve algorithm
void Sieve1()
{
    ll maxn=90000001;
    mark[0]=mark[1]=true;
    for(ll i=2; i*i<=maxn; i++)
    {
        if(!mark[i])
        {
            for(ll j=i*i; j<=maxn; j+=i)
                mark[j]=true;
        }
    }
    for(ll i=2; i<=maxn; i++)
    {
        if(!mark[i])
            Primes.push_back(i);
    }
}
//Prime factorization
int primeFact(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout<<i<<'^'<<cnt<<endl;
        }
    }
    if(n>1)
        cout<<n<<'^'<<1<<endl;
}
//Binary exponentiation
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n%2)
            res*=a,n--;
        else
            a*=a,n/=2;
    }
    return res;
}

//Vector pair Compare
bool com(pair<int,int> a,pair<int,int> b)
{
    if(a.first != b.first)
        return a.first<b.first;
    else
        return a.second>b.second;
}

//Frequince count in O(n)
void countFreq(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    //sort(mp.begin(),mp.end());
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] != -1)
        {
            cout << arr[i] << " " << mp[arr[i]] << endl;
            mp[arr[i]] = -1;
        }
    }
}

//erasing zero from a number
int DE(ll n)
{
    ll p=0,q=1;
    while(n>0)
    {
        ll x=n%10;
        n=n/10;
        if(x>0)
        {
            p+=x*q;
            q=q*10;
        }
    }
    return p;
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        cout<<DivisorCount1(n)<<endl;
    }
    return 0;
}
