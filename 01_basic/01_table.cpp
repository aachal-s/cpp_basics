#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pr;

    for(int i=10;i>0;i--)
    {
        pr=n*i;
        cout<<n<<" * "<<i<<" = "<<pr<<endl;
    }
}