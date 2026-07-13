#include<iostream>
using namespace std;

int main()

{
    
    int i,j,swap,n,a[100];
    cout<<"enter the total number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    return 0;
    
}