#include<iostream>
using namespace std;

int main()
{
    int i,j,key,swap;
    int n;
    cout<<"Enter number of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=2;i<n;i++)
    {
        key = a[i];
       j = i-1;
       while(j>0 && a[j]>key)
       {
        a[j+1] = a[j];
        j = j-1;
       }
       a[j+1] = key;
    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}