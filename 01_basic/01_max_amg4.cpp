#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,max1,max2;
    cin>>n1>>n2>>n3>>n4;

   if(n1>n2)
   {
    max1=n1;

   }
   else
   {
    max1=n2;
   }
   if(n3>n4)
   {
    max2=n3;

   }
   else
   {
    max2=n4;
   }
   if(max1>max2)
   {
    cout<<max1<<endl;
   }
   else
   {
    cout<<max2<<endl;
   }
}
