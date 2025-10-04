#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
       a[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }  
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) 
    {
        if (a[i] <= b[j]) //(<= asending, >= dsending)
        { 
            arr[k++] = a[i++];
        } 
        else 
        {
            arr[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = a[i++];
    }
    while (j < n2)
    {
        arr[k++] = b[j++];
    }
}
void mergesort(int arr[], int left, int right) 
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() 
{
    int arr[1000];
    int n;
    cout<<"enter the sorting number : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i<< " number : ";
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
