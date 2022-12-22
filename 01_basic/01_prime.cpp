#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>2)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }
}