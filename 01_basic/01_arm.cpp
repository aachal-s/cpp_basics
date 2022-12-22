#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int sum=0;

     while(num>0){
        int last=num%10;
        sum+=(pow(last,3));
         num=num/10;}

         if(sum==num){
            cout<<"armstrong";
         }
         else{
            cout<<"not armstrong";
         }
     
}