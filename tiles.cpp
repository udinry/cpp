
#include <iostream>

using namespace std;

int main()
{
  long long  int a, n, m, l, b;
    cin>>n>>m>>a;

    l= n/a;
    b= m/a;

    if(n % a != 0)
    {
        l++;
    }
    if(m % a != 0)
    {
        b++;
    }
    cout<< l*b ;
    return 0;
}



