#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,c,d;
    string w;
    cin>>a;
    while(a--)
    {
        cin>>w;
        c=w.length();
        if(c>10)
        {
            cout<<w[0]<<c-2<<w[c-1]<<endl;
        }
        else
        {
            cout<<w<<endl;
        }
    }
    return 0;
}
