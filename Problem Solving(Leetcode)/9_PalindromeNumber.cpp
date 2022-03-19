#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int temp=x;
    long long int sum=0;
    while(x>0){
        int q=x%10;
        sum=(sum*10)+q;
        x=x/10;
    }
    if(sum==temp) return true;
    else return false;
    return 0;
}
