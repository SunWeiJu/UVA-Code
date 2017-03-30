#include <iostream>

using namespace std;

int main()
{
    long num, n, a, b;
    while(cin>>num)
    {
        n=0;
        for(long i=0; i< num; i+=n) n+=1;
        if(n%2==0)
        {
            long diff = n*(n+1)/2 - num;
            a=n-diff;
            b=1+diff;
        }
        else
        {
            long diff = n*(n+1)/2 - num;
            a=1+diff;
            b=n-diff;
        }
        cout<<"TERM "<<num<<" IS "<<a<<"/"<<b<<endl;
    }
    return 0;
}
