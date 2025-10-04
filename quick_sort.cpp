#include<iostream>
using namespace std;
int position (int arr[],int start,int end)
{
    int indx=start-1;
    int piv=arr[end];
    for(int j= start; j<end; j++)
    {
        if(arr[j]<=piv)
        {
            indx++;
            swap(arr[j],arr[indx]);
        } 
        
    }
    indx++;
    swap(arr[end],arr[indx]);
    return indx;

}
void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int piv_indx = position(arr,start,end);
        quicksort(arr,start,piv_indx-1);
        quicksort(arr,piv_indx+1,end);
    }
    
}

int main()
{
 int arr[1000];
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr, 0,n-1);
    cout<<"sorted list  : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}