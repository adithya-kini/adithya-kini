//Bubble sort using recursion
#include <iostream>
#include<iomanip>
using namespace std;
void bubble(int a[], int n,int k) 
{
  if (n == 1) {
    return;
  }
  for (int i = k; i < n-1; i++)
  {
     if(a[i]<a[i+1])
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
  }
  if (a[k]!=a[n-1])
  {
    bubble(a,n,k+1);
  }
  else
  {
    for (int i = 0; i < n; i++) 
    {
        cout <<a[i]<<setw(5);
    }
  }
  
}

int main() {
  
  int n ;
  cout<<"Enter the number of array elements";
  cin>>n;
  int a[n];
  cout<<"Enter the array elements";
  for (int  i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  bubble(a, n,0);
  return 0;
}
