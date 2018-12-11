
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int a[100];
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int counter=0;
    int margin=a[k-1];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=margin && a[i])
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
