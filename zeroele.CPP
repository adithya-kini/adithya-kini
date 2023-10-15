//In a given matrix for all zero elements the corresponding row and column is be replaced with zeroes
#include<iostream>
#include<iomanip>
using namespace std;
int rc(int **a,int m ,int n,int k,int l)
{
    for (int  i = 0; i <m ; i++)
    {
        a[i][l]=0;
    }
    for (int  i = 0; i <n ; i++)
    {
        a[k][i]=0;
    }
}
int zero(int **a,int m,int n,int r[],int c[],int k,int l)
{
    for (int  i = 0; i <=k; i++)
    {
        for (int  j = 0; j <=l; j++)
        {
            rc(a,m,n,r[i],c[j]);
        }
        
    }
}
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns";
    cin>>m>>n;
    int r[m],c[n],k=-1,l=-1;
    int **a=new int*[m];
    for (int  i = 0; i < m; i++)
    {
        a[i]=new int[n];
    }
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if (a[i][j]==0)
            {
                r[k++]=i;
                c[l++]=j;
            }
        }
    }
    zero(a,m,n,r,c,k,l);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    for (int  i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}