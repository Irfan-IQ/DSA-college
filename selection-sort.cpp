#include<iostream>
using namespace std;

int main()
{
    int i,j,min,ind,n;
    cout<<"Enter total number of elements in the array"<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        ind = i;
        min = a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                ind = j;
            }
            if(a[i] != min)
            {
                a[i] = min;

            }
        }

    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}