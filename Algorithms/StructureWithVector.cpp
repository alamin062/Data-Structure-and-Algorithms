#include<bits/stdc++.h>
using namespace std;
struct node{
int a;
int b;
};

bool Compare(node n1, node n2){
	return n1.a < n2.a;
}
int main()
{
    int n,m,i;
    cin>>n;
    vector <node> v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i].a;
        cin>>v[i].b;
    }
     sort(v.begin(), v.end(), Compare);
     /*sort(v.begin(), v.end(), [](Student a, Student b) {
		return a.roll < b.roll;
	});*/
    for(auto x:v){
        cout<<x.a<<" "<<x.b<<endl;
    }

    return 0;
}
