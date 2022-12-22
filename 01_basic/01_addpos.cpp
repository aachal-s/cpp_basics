// //pgrm--> add until positive input
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int sum=0;

//     do
//     {
//         sum=sum+num;
//         cin>>num;
//     } while (num>=0);

//     cout<<"sum="<<sum<<endl;
    
// }

#include <iostream>
using namespace std;

int main() {
int number,n;
int sum = 0;

cout<<"Enter the count of numbers: ";
cin>>n;

cout << "Enter a number: ";
cin >> number;

for(int i=1;i<n;i++)
{
    if(number>=0)
    {
        sum=sum+number;
        cout << "Enter a number: ";
        cin>>number;
    }
    else
    {
        sum=sum+0;
        cout << "Enter a number: ";
        cin>>number;
    }
}
cout<<"sum of positive numbers is="<<sum<<endl;
}