#include<iostream>
using namespace std;

int main()
/*{
    int a[3],c=0,d=0,i;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]=1)
        {
            c++;
        }
        else if(a[i]=2)
        {
            d++;
        }
        else
        {
            return 0;
        }
    }
    if(c>d)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
    cout<<endl<<c<<endl<<d;
    return 0;
}
*/
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
    return 0;
}
