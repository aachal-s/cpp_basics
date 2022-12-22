#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char ch;
    cout<<"Enter numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Enter operation"<<endl;
    cin>>ch;

    switch(ch)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        case '%':
        cout<<n1%n2<<endl;
        break;
        cout<<"Invalid input"<<endl;
        break;
    }
}