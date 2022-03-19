#include<bits/stdc++.h>
using namespace std;
int arr[10];
int Top=-1;
int isempty()
{
    if(Top==-1)
        return 1;
    else
        return 0;
}
int top()
{
    if(!isempty())
    {
        return arr[Top];
    }
    else
        cout<<"Stack is empty"<<endl;
}
void pop()
{
    if(!isempty())
    {
        Top--;
    }
    else
        cout<<"Stack is empty"<<endl;
}
void push(int x)
{
    if(Top<10)
    {
        Top++;
        arr[Top]=x;
    }
    else
        cout<<"stack is full"<<endl;
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
