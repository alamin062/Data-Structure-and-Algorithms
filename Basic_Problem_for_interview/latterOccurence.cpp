// input "hello"
// output h->1
//        e->1
//        l->2
//        o->1

void latterOccur()
{
    string s = "hello world";
    map <char,int> mp;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')continue;
        mp[s[i]]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
}