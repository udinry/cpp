#include<iostream>
#include<string>
using namespace std;
int main()
{
    int d,e,c;
    string a,b;
    cin>>a>>b;
    for(e=0;e<a.length();e++)
    {
        if(a[e]<92)
        {
            a[e]=a[e]+32;
        }
    }
     for(e=0;e<b.length();e++)
    {
        if(b[e]<92)
        {
            b[e]=b[e]+32;
        }
    }
    if (a < b)
    {
        cout << -1;
    }
    else if (a > b)
    {
        cout << 1;
    }
    else if (a == b)
    {
        cout << 0;
    }
    return 0;
}
