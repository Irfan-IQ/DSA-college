#include<iostream>
using namespace std;

int main(){
    int i,j,n,swap = 0;
    cout<<"Enter the total number of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array"<<endl;
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
    cout<<"...Sorted Array..."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}