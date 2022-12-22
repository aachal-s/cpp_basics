#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int reverse=0;

    while(num>0){
        int last=num%10;
        reverse= reverse*10+last;
         num=num/10;}

   cout<<reverse;      
}