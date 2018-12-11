#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    string d;
    cin>>d;
    c=1;
    for(a=1;a<d.length();a++)
    {



            if(d[a]==d[a-1])
            {
            c=c+1;
            if(c==7)
            {
                cout<<"YES";
                return 0;
            }
            }
            else
            {
                c=1;
            }




    }
   cout<<"NO";
   return 0;
}
