#include<iostream>
using namespace std;

int position(int arr[],int start,int end)
{
    int index=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            index++;
            swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[index],arr[end]);
    return index;
}

void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pivot_index=position(arr,start,end);
        quicksort(arr,start,pivot_index-1);
        quicksort(arr,pivot_index+1,end);
    }
}
int main()
{
    int n,arr[1000];
    cout<<"enter the number of paper : ";
    cin>>n;
    cout<<"enter the paper number  : ";
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"sorting : ";
    for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}