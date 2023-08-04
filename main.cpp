#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int ceil(float a,float b)
{
    int x=a/b;
    if((a/b)!=1)
    {int val = x +1;
    return val;}
    else
        return 1;
}
int round(float a,float b)
{
    float x=a/b;
    int c = a/b;
    if(x>=(c+0.5))
    {
        int val = (a / b)+1;
        return val;
    }
    else
       {
           int val = (a/b);
           return val;
           }

}

int floo(float a,float b)
{
    int val = (a / b);
    return val;
}

int main()
{
    float a,b;
    cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floo(a,b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a,b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a,b)<<endl;
    return 0;
}
