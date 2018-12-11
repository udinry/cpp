#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d,e,p,v,s;


    cin>>a;
    while(a--)
    {
        cin>>p>>v>>s;
        if(p+v+s>=2)
        {
            c=c+1;
        }
    }
    cout<<c;
    return 0;
}

