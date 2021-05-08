#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==1)
    {
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.00*y<<endl;
    }
    else if (x==2)
    {
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.50*y<<endl;
    }
    else if (x==3)
    {
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<5.00*y<<endl;
    }
    else if (x==4)
    {
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<2.00*y<<endl;
    }
    else
    {
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<1.50*y<<endl;
    }



    return 0;
}



