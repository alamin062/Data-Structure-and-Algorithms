#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    int n=9;
    int d= v.size();
   for(int i=0;i<d-1;i++){
    for(int j=i+1;j<d;j++){
        if(v[i]+v[j]==n)
        {
            return {i,j}
        }
    }
    }
    return 0;
}

