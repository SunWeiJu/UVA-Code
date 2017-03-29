#include <iostream>

using namespace std;
int main()
{
    long long i, j, maxCycle;
    while(cin>>i>>j)
    {
        cout<<i<<" "<<j<<" ";
        maxCycle = 0;
        if(j<i)
        {
            long long  tmp = i;
            i = j;
            j = tmp;
        }
        for(long long  n = i; n<=j; n++)
        {
            long long  m = n;
            long long  count = 1;
            while(m!=1)
            {
                if(m%2==0) m/=2;
                else m=3*m+1;
                count += 1;
                //cout<<n<<endl;
            }
            if(count>maxCycle) maxCycle = count;
        }
        cout<<maxCycle<<endl;
    }
    return 0;
}
