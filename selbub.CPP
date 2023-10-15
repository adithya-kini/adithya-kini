//Function for Bubble and Selection Sort,‘s’ for Selection Sort and ‘b’ for Bubble Sort
#include<iostream>
#include<iomanip>
using namespace std;
int selection(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
}
int bubble(int a[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(a[i]<a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
         }
         counter++;
    }
}
int binary(int a[],int n,int key)
{
     int e=n,s=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
                e=mid-1;
            else
                s=mid+1;
    }
    return (-1);
}
int main()
{
    int n,key;
    char e;
    cout<<"Enter the number of elements";
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"How should the array be sorted";
    cin>>e;
    switch (e)
    {
    case 's':
        selection(a,n);
        break;
    case 'b':
        bubble(a,n);
        break;

    default:
        break;
    }
    cout<<"The sorted elements are";
    for (int  i = 0; i < n; i++)
    {
        cout<<setw(5)<<a[i];
    }
    cout<<endl<<"Enter the element to be searched";
    cin>>key;
    int pos=binary(a,n,key);
    if(pos>=0)
        cout<<"The element is in the position"<<pos+1;
    else
        cout<<"Element not found";
    return 0;
}
