#include<bits/stdc++.h>
using namespace std;

//Finding a char from a string
string eraseChar(char ch,string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==ch)
        {
            s.erase(i);
        }
        else
            continue;
    }
    return s;
}

//String is palindrome or not
void isPalindrome(string s)
{
    string s1=s;
    reverse(s.begin(),s.end());
    if(s==s1)
        cout<<"It is a palindrome"<<endl;
    else
        cout<<"It is not a palindrome"<<endl;
}
//Maximum occurrence character in a string
int CharOcc(string s)
{
    map <char, int> mp;
    int xx=0;
    char ch;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>xx)
        {
            xx=mp[s[i]];
            ch=s[i];
        }
    }
    return xx;
}

//K occurrence
struct node
{
    int a;
    int b;
};

bool Compare(node n1, node n2)
{
    return n1.b < n2.b;
}
int CharOcc1(string s)
{
    map <char, int> mp;
    int xx=0;
    char ch;
    vector <node> v;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>xx)
        {
            xx=mp[s[i]];
            ch=s[i];
        }
    }
    for(auto x:mp)
    {
        v.push_back( {x.first,x.second} );
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].a<<" "<<v[i].b<<endl;
    }
    return xx;
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

//char to int
char ch='5';
int n =ch-'0';

//int to char
int n1= 5;
char ch1 =n1+'0';

//int to string
int n2=123;
string s= to_string(n2);

//String to int
int to_int(string s)
{

    stringstream str(s);

    int x = 0;
    str >> x;

    return x;

}

int main()
{

    while(1)
    {
        string s;
        cin>>s;
        cout<<to_int(s)*to_int(s)<<endl;
    }
    return 0;
}
