#include<iostream>
using namespace std;
int main()
{
    int a,b,c,first,last,mid;
    int arr[100];
    cout<<"How many elements you want to enter?"<<endl;
    cin>>a;
    cout<<"Enter the elements"<<endl;
    for(b=0;b<a;b++)
    {
        cin>>arr[b];
    }
    cout<<"Enter the element you are searching for"<<endl;
    cin>>c;
    first=0;
    last=a;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]==c)
        {
            cout<<"Element "<<c<<" found at "<<mid+1;
        }
        if(c>arr[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }

    return 0;

}
