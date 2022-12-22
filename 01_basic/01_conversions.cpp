// //binary to decimal
// #include<stdio.h>
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     string a;
//     cin>>a;
//     int sum=0;
//     int c=stoi(a);
//     int b=a.length();
//    for(int i=0;i<b;i++)
//    {
//        int last=c%10;
//        sum+=last*pow(2,i);
//        c=c/10;
//    }
//    cout<<sum;
// }

//octal to decimal

//hexadecimal to decimal
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    int sum1=0;
    int sum2=0;
    int c=stoi(a);
    int b=a.length();
    for(int i=0;i<b;i++)
    {
        if(a.at(i)=='A')
        {
            sum2+=10*pow(16,i);
        }
        else if(a.at(i)=='B')
        {
            sum2+=11*pow(16,i);
        }
        else if(a.at(i)=='C')
        {
            sum2+=12*pow(16,i);
        } 
        else if(a.at(i)=='D')
        {
            sum2+=13*pow(16,i);
        } 
        else if(a.at(i)=='E')
        {
            sum2+=14*pow(16,i);
        } 
        else if(a.at(i)=='F')
        {
            sum2+=15*pow(16,i);
        }
        else if(a.at(i)==c%10)
        {
        int last=c%10;
        sum1+=last*pow(16,i);
        c=c/10;
        }
        sum+=sum1+sum2;
    }
    cout<<sum;
}