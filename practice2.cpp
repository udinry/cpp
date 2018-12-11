#include<iostream>
using namespace std;
template <class type>
type max(type a , type b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{

    //cout<<max(A,B)<<endl;
    cout<<max(1,3)<<endl;
    cout<<max(10.22,6.3)<<endl;
    return 0;
}
