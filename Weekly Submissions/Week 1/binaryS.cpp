#include<iostream>

using namespace std;
int Binart_search(int arr[], int n, int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

    }
    return -1;
}

int main()
{
    int n, key;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key "<<endl;
    cin>>key;
    cout<<Binart_search(arr, n, key)<<endl;
    return 0;
}