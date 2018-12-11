#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int a,b=0,c,d,coun=1;
    char e[1000],f[1000];
    gets(e);
    c=sizeof(e);
    for(a=0;a<c;a+2)
    {
        f[a]=e[a];
    }
    while(coun>0)
    {


    for(a=0;a<c/2;a++)
    {
        if(f[a]>f[a+1])
        {
            b=f[a];
            f[a]=f[a+1];
            f[a+1]=b;
            coun++;
        }
    }
    }
    for(a=1;a<=c;a++)
    {
        cout<<f[a];
        if(a=c)
        {
            continue;
        }
        cout<<"+";


    }
    return 0;
}
