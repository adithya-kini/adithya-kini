//Binary search using recursion
#include<iostream>
#include<iomanip>
#include<process.h>
using namespace std;
binary(int a[],int s,int e,int ele)
{
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (a[mid]==ele)
        {
            cout<<"The position of element is"<<mid;
            exit(0);
        }
        else if (a[mid]>ele)
            binary(a,s,mid-1,ele);
            else
            binary(a,mid+1,e,ele);
    }
    return -1;

}
int main()
{
    int n,ele;
    cout<<"Enter the number of elements";
    cin>>n;
    int a[n];
    cout<<"Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be found";
    cin>>ele;
    binary(a,0,n,ele);

}
