#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of student : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the grades of "<< i+1  <<" student : ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    } 
    cout<<"The sorted list of grades : ";
    for(int i= 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

    
