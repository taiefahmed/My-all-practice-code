#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cout<<"The number of book : ";
    cin>>n;
    cout<<"The catalog number of book :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
     cout<<"The sorted list of book : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}