#include<iostream>
using namespace std;

int main()
{
    int i,j,min,ind,n,swap;
    cout<<"Enter total number of elements in the array"<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        min = a[i];
        ind = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                ind = j;
            }
        }
        if(a[i] != min)
        {
            swap = a[i];
            a[i] = a[ind];
            a[ind] = swap;
        }
    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}