#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
bool flag=0;

// way to do------>
//  for(int i=2;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"not prime"<<endl;
//             flag=1;
//             break;
//         }
//     }


 for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            flag=1;
            break;
        }
    }



    if(flag=0)
    {
        cout<<"prime"<<endl;
    }
     
}