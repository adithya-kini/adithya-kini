//factorial of a number using recursion
#include<iostream>
#include<iomanip>
using namespace std;
int fact(int n)
{   
    int f=1;
    if(n!=0)
    {   
        f=n*fact(n-1);
    }
    else
        return f;
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial has to be calculated";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}