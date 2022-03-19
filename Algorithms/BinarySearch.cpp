#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> arr,int Size ,int x)
{
    int low=0;
    int high=Size-1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    //int d=sizeof(arr)/sizeof(arr[0]);
    int xy=Binary_Search(v,n,5);
    sort(v.begin(),v.end());
    int xx = binary_search(v.begin(),v.end(),5);
    int xx1 = lower_bound(v.begin(),v.end(),5)-v.begin();
    int xx2 = upper_bound(v.begin(),v.end(),5)-v.begin();
    cout<<xy<<endl;
    return 0;
}
