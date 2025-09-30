#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cout<<"The number of employer : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"The salary of "<<i<<" employer :";
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        int index= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[index]<arr[j])
            {
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }

    cout<<"The sorted list of salaries : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}