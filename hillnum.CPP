//To check whether a number is a hill number or not
#include<iostream>
#include<iomanip>
#include<process.h>
using namespace std;
int main()
{
    int n,key;
    bool flag=1;
    cout<<"Enter the number";
    cin>>n;
    if (n<0)
    {
        cout<<"The number is not a hill number";
        exit(0);
    }
    
    for (int  i = n; i >0; i/=10)
    {
        if (i%10>(i/10)%10)
        {
            key=i;
            break;
        }
    }
    if (key==n)
    {
        cout<<"The number is not a hill number";
        exit(0);
    }
    
    for (int i = key; i >0; i/=10)
    {
        if (i%10<(i/10)%10)
        {
            cout<<"The number is not a hill number";
            exit(0);
        }
    }
    cout<<"This is a hill number";
}