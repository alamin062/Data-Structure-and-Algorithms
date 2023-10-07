//Fibonacci
void Fibonacci(int n)
{
    int a=0;
    int b=1;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<b<<" ";
            continue;
        }
        int next = a+b;
        a=b;
        b=next;
        cout<<next<<" ";

    }
}