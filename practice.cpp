#include<iostream>
#include<fstream>

using namespace std;
int main()
char m;
ofstream fout;
fout.open("m.txt",ios::app);
for (int i=5;i>0;i--)
{
    cin>>m;
    fout.put(m);
}
cout<<fout.tellp();
fout.close();
ifstream fin;
fin.open("m.txt",ios::in);
for(i=50;i>0;i--)
{
    if (fin.eof==0)
    {
        fin.close();
    }
    else
    {
        fin.get(m);
        cout<<m;
    }
}
fin.close();
return 0;
}
