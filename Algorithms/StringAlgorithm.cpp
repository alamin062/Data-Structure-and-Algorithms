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
    for(int i=0;i<s.size();i++)
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
struct node{
int a;
int b;
};

bool Compare(node n1, node n2){
	return n1.b < n2.b;
}
int CharOcc1(string s)
{
    map <char, int> mp;
    int xx=0;
    char ch;
    vector <node> v;
    for(int i=0;i<s.size();i++)
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
    for(int i=0;i<v.size();i++){
        cout<<v[i].a<<" "<<v[i].b<<endl;
    }
    return xx;
}
int main()
{

    while(1)
    {
        string s;
        cin>>s;
        cout<<CharOcc1(s)<<endl;
    }
    return 0;
}
