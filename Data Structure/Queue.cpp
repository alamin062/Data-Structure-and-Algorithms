#include<bits/stdc++.h>
using namespace std;
int n=10;
int arr[10];
int Front=-1;
int Back=-1;
int isempty()
{
    if(Front==-1 || Front>Back)
        return 1;
    else
        return 0;
}
int top()
{
    if(!isempty())
    {
        return arr[Front];
    }
    else
        cout<<"Queue is empty"<<endl;
}
void pop()
{
    if(Front==-1 || Front>Back)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        Front++;
    }

}
void push(int x)
{
    if(Back==n-1)
    {
        cout<<"Queue is full"<<endl;
    }
    Back++;
    arr[Back]=x;
    if(Front==-1)
        Front++;
}
int main()
{
    push(5);
    push(3);
    push(10);
    cout<<top()<<endl;
    pop();
    cout<<top()<<endl;
}

