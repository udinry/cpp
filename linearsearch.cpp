#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    int arr[100];
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>a;
    cout<<"Enter the elements"<<endl;
    for(b=0;b<a;b++)
    {
        cin>>arr[b];
    }
    cout<<"Enter the element you wan to search"<<endl;
    cin>>c;
    for(b=0;b<a;b++)
    {
        if(arr[b]==c)
        {
            cout<<"Item"<<c<<" found at "<<b+1;
        }
    }
    return 0;
}
