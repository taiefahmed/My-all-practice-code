#include<iostream>
using namespace std;
int main()
{
      int arr[1000];
      int n;
      cout<<"enter the array size : ";
      cin>> n;
      for(int i=0;i<n;i++)
      {
        cout<<"enter the number "<<i<<" : ";
        cin>>arr[i];
      }
      for(int i=0;i<n-1;i++)
      {
        int index =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        swap (arr[i],arr[index]);
      }
      cout<<"The sorted array : ";
      for(int i=0;i<n;i++)
      {
        cout<<arr[i]<<" ";
      }
      return 0;
}